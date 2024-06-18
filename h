[1mdiff --git a/openapi.yaml b/openapi.yaml[m
[1mindex 8a20f90..3e51709 100644[m
[1m--- a/openapi.yaml[m
[1m+++ b/openapi.yaml[m
[36m@@ -352,6 +352,7 @@[m [mtags:[m
 paths:[m
   /anomalie-adresse:[m
     get:[m
[32m+[m[32m      operationId: getAllTroubleTickets[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[36m@@ -395,6 +396,7 @@[m [mpaths:[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[32m+[m[32m      operationId: countTroubleTickets[m
       summary: Count the number of trouble tickets[m
       description: Count the number of trouble tickets matching the given criteria.[m
       parameters:[m
[36m@@ -423,6 +425,7 @@[m [mpaths:[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[32m+[m[32m      operationId: createTroubleTicket[m
       summary: Create a trouble ticket[m
       description: Create a trouble ticket[m
       requestBody:[m
[36m@@ -473,6 +476,7 @@[m [mpaths:[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[32m+[m[32m      operationId: getTroubleTicket[m
       summary: Get a trouble ticket[m
       description: Get a trouble ticket[m
       parameters:[m
[36m@@ -504,6 +508,7 @@[m [mpaths:[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[32m+[m[32m      operationId: updateTroubleTicket[m
       summary: Update a trouble ticket[m
       description: Update a trouble ticket[m
       requestBody:[m
[36m@@ -529,6 +534,7 @@[m [mpaths:[m
       tags:[m
         - TroubleTicket[m
         - OI[m
[32m+[m[32m      operationId: partialUpdateTroubleTicket[m
       summary: Partially update a trouble ticket[m
       description: Partially update a trouble ticket[m
       requestBody:[m
[36m@@ -558,6 +564,7 @@[m [mpaths:[m
       tags:[m
         - Note[m
         - OI[m
[32m+[m[32m      operationId: getTroubleTicketNotes[m
       summary: Get all notes of a trouble ticket[m
       description: Get all notes of a trouble ticket[m
       parameters: *searchAndPaginateParameters[m
[36m@@ -584,6 +591,7 @@[m [mpaths:[m
       tags:[m
         - Note[m
         - OI[m
[32m+[m[32m      operationId: countTroubleTicketNotes[m
       summary: Count the number of notes of a trouble ticket[m
       description: Count the number of notes of a trouble ticket matching the given criteria.[m
       parameters:[m
[36m@@ -603,6 +611,7 @@[m [mpaths:[m
       tags:[m
         - Note[m
         - OI[m
[32m+[m[32m      operationId: createTroubleTicketNote[m
       summary: Create a note for a trouble ticket[m
       description: Create a note for a trouble ticket[m
       requestBody:[m
[36m@@ -635,6 +644,7 @@[m [mpaths:[m
       tags:[m
         - Attachment[m
         - OI[m
[32m+[m[32m      operationId: getTroubleTicketAttachments[m
       summary: Get all attachments of a trouble ticket[m
       description: Get all attachments of a trouble ticket[m
       parameters: *searchAndPaginateParameters[m
[36m@@ -661,6 +671,7 @@[m [mpaths:[m
       tags:[m
         - Attachment[m
         - OI[m
[32m+[m[32m      operationId: countTroubleTicketAttachments[m
       summary: Count the number of attachments of a trouble ticket[m
       description: Count the number of attachments of a trouble ticket matching the given criteria.[m
       parameters:[m
[36m@@ -680,6 +691,7 @@[m [mpaths:[m
       tags:[m
         - Attachment[m
         - OI[m
[32m+[m[32m      operationId: createTroubleTicketAttachment[m
       summary: Create an attachment for a trouble ticket[m
       description: Create an attachment for a trouble ticket[m
       requestBody:[m
[36m@@ -713,6 +725,7 @@[m [mpaths:[m
       tags:[m
         - Attachment[m
         - OI[m
[32m+[m[32m      operationId: downloadTroubleTicketAttachment[m
       summary: Download an attachment of a trouble ticket[m
       description: Download an attachment of a trouble ticket[m
       parameters:[m
[36m@@ -737,6 +750,7 @@[m [mpaths:[m
       tags:[m
         - Event[m
         - OI[m
[32m+[m[32m      operationId: getTroubleTicketEvents[m
       summary: Get all events of all trouble tickets[m
       description: Get all events of all trouble tickets[m
       parameters: *searchAndPaginateParameters[m
[36m@@ -762,6 +776,7 @@[m [mpaths:[m
       tags:[m
         - Event[m
         - OI[m
[32m+[m[32m      operationId: countTroubleTicketEvents[m
       summary: Count the number of events of all trouble tickets[m
       description: Count the number of events of all trouble tickets matching the given criteria.[m
       parameters:[m
[36m@@ -780,6 +795,7 @@[m [mpaths:[m
       tags:[m
         - Event[m
         - OC[m
[32m+[m[32m      operationId: receoveTroubleTicketEvent[m
       summary: Receive an event for a trouble ticket[m
       description: Receive an event for a trouble ticket[m
       requestBody:[m
