/* f_0x101d7780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   walks records returned by FUN_101d76a0 and dispatches each record type to FUN_101040e0 or FUN_10104170.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101d7780(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t sp0)
{
    uint32_t ebx = arg0;
    uint32_t esi = arg1;
    uint32_t edi = 0u;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t target;
    const uint32_t ptr_arg0 = sp0 + 4u;

    /*
       Original first call:
         lea eax, [esp + 0x10]   ; after push ebx / push ebp / push edi, this is sp0 + 4
         push eax
         push edi                ; 0
         push ebx
         mov ebp, ecx
         call 0x101d76a0

       0x101d76a0 is a thiscall with ecx = self and three stack arguments.
    */
    eax = cow_thiscall(g, COW_IMG(0x101d76a0u), self, 3, ebx, 0u, ptr_arg0);

    if (eax == 0u)
        return;

    for (;;)
    {
        /*
           Loop entry stack pointer is sp0 - 4 (push ebx) - 4 (push ebp) - 4 (push edi)
           - 4 (push esi), i.e. sp0 - 16.

           Therefore:
             [esp + 0x14] == [sp0 + 4] == the original first stack argument slot.
             lea edx, [esp + 0x14] == sp0 + 4.
        */
        ecx = eax - 2u;

        if (ecx <= 6u)
        {
            edx = (uint32_t)rd8(COW_IMG(0x101d780cu) + ecx);
            target = rd32(COW_IMG(0x101d7800u) + edx * 4u);

            if (target == COW_IMG(0x101d77bbu))
            {
                /*
                   101d77bb:
                     mov ecx, [esp + 0x14]   ; [sp0 + 4]
                     push 0
                     push 0
                     and eax, 0xffff
                     push ecx
                     push eax
                     push esi
                     call 0x101040e0
                     add esp, 0x14
                */
                cow_cdecl(g, COW_IMG(0x101040e0u), 5,
                          esi,
                          eax & 0xFFFFu,
                          rd32(ptr_arg0),
                          0u,
                          0u);
            }
            else if (target == COW_IMG(0x101d77b7u))
            {
                /*
                   101d77b7:
                     push -1
                     jmp 0x101d77d7
                */
                cow_cdecl(g, COW_IMG(0x10104170u), 3,
                          esi,
                          eax & 0xFFFFu,
                          0xFFFFFFFFu);
            }
            else
            {
                /*
                   101d77d5:
                     push 0
                     jmp 0x101d77d7
                */
                cow_cdecl(g, COW_IMG(0x10104170u), 3,
                          esi,
                          eax & 0xFFFFu,
                          0u);
            }
        }
        else
        {
            /*
               101d77a6:
                 ja 0x101d77d5
               101d77d5:
                 push 0
                 jmp 0x101d77d7
            */
            cow_cdecl(g, COW_IMG(0x10104170u), 3,
                      esi,
                      eax & 0xFFFFu,
                      0u);
        }

        /*
           101d77e6:
             lea edx, [esp + 0x14]   ; sp0 + 4
             inc edi
             push edx
             push edi
             push ebx
             mov ecx, ebp
             call 0x101d76a0
        */
        edi++;
        eax = cow_thiscall(g, COW_IMG(0x101d76a0u), self, 3, ebx, edi, ptr_arg0);

        if (eax == 0u)
            break;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    cow_fn_101d7780(g, g->ecx, arg0, arg1, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
