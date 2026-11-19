/* f_0x1000de80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Converts a wide string to a narrow string and appends it to the byte buffer owned by the object in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000de80(Guest* g, uint32_t self, uint32_t wstr)
{
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    uint32_t edi;
    uint32_t ebx;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;

    if (wstr == 0u) {
        edi = 0u;
    } else {
        eax = cow_stdcall(g, rd32(COW_IMG(0x1032913cu)), 1u, wstr);
        ebx = eax + eax + 2u;

        eax = ebx;
        eax = eax + 3u;
        eax = (eax & 0xFFFFFF00u) | ((eax & 0xFFu) & 0xFCu);

        g->eax = eax;
        cow_cdecl(g, COW_IMG(0x10312190u), 0u);

        /*
         * The original uses the stack pointer after the alloca-like call as the
         * destination buffer.  cow_frame gives us guest memory for that buffer.
         * The exact address is not observable after return, but the WideCharToMultiByte
         * call must receive a valid guest pointer.
         */
        edi = cow_frame(g, g->esp, ebx);

        wr8(edi, 0u);

        cow_stdcall(g,
                    rd32(COW_IMG(0x10329154u)),
                    8u,
                    0u,
                    0u,
                    wstr,
                    0xFFFFFFFFu,
                    edi,
                    ebx,
                    0u,
                    0u);
    }

    while (rd8(edi) != 0u) {
        ebx = rd32(COW_IMG(0x103294b0u));

        eax = rd32(self + 4u);
        ecx = rd32(self);

        if (ecx == eax) {
            ecx = rd32(self + 8u);
            eax = eax + eax;
            wr32(self + 4u, eax);

            eax = cow_stdcall(g, ebx, 2u, ecx, eax);
            wr32(self + 8u, eax);
        }

        edx = rd32(self + 8u);
        eax = rd32(self);
        ecx = rd8(edi);
        wr8(edx + eax, (uint8_t)ecx);

        ecx = rd32(self);
        ecx = ecx + 1u;
        wr32(self, ecx);

        edx = (edx & 0xFFFFFF00u) | rd8(edi);
        eax = cow_stdcall(g, rd32(COW_IMG(0x10329170u)), 1u, edx);

        if (eax != 0u) {
            eax = rd32(self + 8u);
            ecx = rd32(self);
            edx = (edx & 0xFFFFFF00u) | rd8(edi + 1u);
            wr8(eax + ecx, (uint8_t)edx);

            eax = rd32(self);
            eax = eax + 1u;
            wr32(self, eax);
        }

        eax = rd8(edi + 1u);
        edi = edi + 1u;

        if ((eax & 0xFFu) == 0u) {
            break;
        }
    }

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000de80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000de80(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
