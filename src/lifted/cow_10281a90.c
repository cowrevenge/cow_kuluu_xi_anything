/* f_0x10281a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10281a90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1099d630u) + arg1 * 0x28u) != 0xffffffffu)
    {
        t1 = rd32(COW_IMG(0x1099d638u) + arg1 * 0x28u);
        wr32(COW_IMG(0x1099d630u) + arg1 * 0x28u, 0xffffffffu);
        if (t1 == 0u)
        {
            eax = t1;
            ecx = self;
        }
        else
        {
            eax = t1;
            g->eax = eax;
            t2 = rd32(eax);
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, rd32(t2 + 8u), t2, 1, eax);
            t4 = g->ecx;
            eax = t3;
            ecx = t4;
        }
        if (rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u) != 0u)
        {
            esi = rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(rd32(esi) + 8u), ecx, 1, esi);
        }
        if ((int32_t)rd32(COW_IMG(0x109a261cu)) > 0)
        {
            eax = rd32(COW_IMG(0x109a261cu));
            ecx = COW_IMG(0x1099d608u) + eax * 0x28u;
L_10281ae1: ;
            if (rd32(ecx) != 0xffffffffu) goto L_10281aee;
            if ((int32_t)(eax - 1u) > 0)
            {
                eax = eax - 1u;
                ecx = ecx - 0x28u;
                goto L_10281ae1;
            }
            eax = eax - 1u;
L_10281aee: ;
            wr32(COW_IMG(0x109a261cu), eax);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10281a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10281a90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
