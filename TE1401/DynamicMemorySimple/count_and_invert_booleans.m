function [count, inverseArray] = count_and_invert_booleans(boolArray, inverseArray) %#codegen
    % Ensure the function supports code generation for dynamic array sizes
    assert(isa(boolArray, 'logical'));
    assert(isa(inverseArray, 'double')); % Expecting double (LREAL equivalent in PLC)

    % Initialize count to zero
    count = 0;
    
    % Count all true values in the input array
    [s1,s2] = size(boolArray);
    for i1 = 1:s1
        for i2 = 1:s2
            if boolArray(i1,i2)
                count = count + 1;
            end
        end
    end

    % Calculate the total number of elements to process based on the smaller array
    numElementsToProcess = min(numel(boolArray), numel(inverseArray));
    
    % Flatten arrays for linear indexing (if necessary)
    flatBoolArray = boolArray(:);
    flatInverseArray = inverseArray(:);
    
    % Loop through each element in both arrays up to numElementsToProcess
    for idx = 1:numElementsToProcess
        if flatBoolArray(idx)
            flatInverseArray(idx) = 0.0; % Representing false as 0.0
        else
            flatInverseArray(idx) = 1.0; % Representing true as 1.0
        end
    end
    
    % Reshape inverseArray back to its original dimensions (if it was flattened)
    inverseArray(:) = flatInverseArray;
end
