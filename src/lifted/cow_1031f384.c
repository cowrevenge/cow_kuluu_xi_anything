/* f_0x1031f384 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031f384(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x109f82e0u);
L_1031f38c: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        if (eax >= eax + 0x480u)
        {
            eax = eax + 0x480u;
        }
        else
        {
            edi = eax;
            eax = eax + 0x480u;
            ebx = edi + 0xcu;
L_1031f3a0: ;
            if (rd32(ebx - 4u) != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), ecx, 1, ebx);
                t1 = g->ecx;
                t2 = g->edx;
                ecx = t1;
                edx = t2;
            }
            if (edi + 0x24u < rd32(esi) + 0x480u)
            {
                eax = rd32(esi) + 0x480u;
                ebx = ebx + 0x24u;
                edi = edi + 0x24u;
                goto L_1031f3a0;
            }
            eax = rd32(esi) + 0x480u;
        }
        t3 = rd32(esi);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t3, in_edi, in_esi);
        t4 = g->edx;
        wr32(esi, 0u);
        ecx = t3;
        edx = t4;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x109f83e0u))
    {
        esi = esi + 4u;
        goto L_1031f38c;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f384(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f384(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
