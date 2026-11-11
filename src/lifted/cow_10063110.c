/* f_0x10063110 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Releases/destroys a 120-byte-record object referenced by ecx, freeing its array elements and optionally invoking finalizer/destructor callbacks based on the stack argument flags.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063110(Guest* g, uint32_t self_ecx, uint32_t flags)
{
    uint8_t bl = (uint8_t)(flags & 0xFFu);
    uint32_t esi = self_ecx - 0x34u;

    if (bl & 2) {
        uint32_t eax = rd32(esi - 4u);
        uint32_t ebp = esi - 4u;

        uint32_t ecx_tmp = eax + eax * 2u;
        eax = eax - 1u;
        ecx_tmp = ecx_tmp + ecx_tmp * 4u;
        esi = esi + ecx_tmp * 8u;

        /* js 0x10061180 tests SF from the preceding DEC EAX, not from LEA */
        if ((int32_t)eax >= 0) {
            uint32_t edi = eax + 1u;

            while (1) {
                uint32_t ecx_arg;

                esi = esi - 0x78u;
                if (esi == 0) {
                    ecx_arg = 0;
                } else {
                    ecx_arg = esi + 0x34u;
                }

                cow_fastcall(g, COW_IMG(0x1003b5c0u), ecx_arg, g->edx, 0);

                cow_fastcall(g, COW_IMG(0x100747c0u), esi, g->edx, 0);

                edi = edi - 1u;
                if (edi == 0) break;
            }
        }

        if (bl & 1) {
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }

        return ebp;
    } else {
        uint32_t ecx_arg;

        if (esi != 0) {
            ecx_arg = esi + 0x34u;
        } else {
            ecx_arg = 0;
        }

        cow_fastcall(g, COW_IMG(0x1003b5c0u), ecx_arg, g->edx, 0);

        cow_fastcall(g, COW_IMG(0x100747c0u), esi, g->edx, 0);

        if (bl & 1) {
            cow_cdecl(g, COW_IMG(0x10028710u), 1, esi);
        }

        return esi;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t flags = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10063110(g, g->ecx, flags);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
