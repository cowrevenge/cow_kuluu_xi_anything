/* f_0x102267f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102267f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x30u) != rd32(self + 0x68u))
    {
        eax = rd32(self + 0x68u);
        edi = rd32(self + 0x30u);
        if ((int32_t)edi < 0) goto L_1022680f;
        if ((int32_t)edi >= (int32_t)rd32(self + 0x44u)) goto L_1022680f;
        edx = edi * 8u + rd32(self + 0x20u);
L_10226811: ;
        if ((int32_t)eax < 0) goto L_10226822;
        if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_10226822;
        ecx = eax * 8u + rd32(self + 0x20u);
L_10226824: ;
        if (rd32(edx) != rd32(ecx))
        {
            eax = rd32(edx);
            edx = rd32(ecx);
            if (rd32(COW_IMG(0x10667160u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x10667160u));
                g->esp = sp0 - 8u;
                t1 = cow_fastcall(g, COW_IMG(0x10226d00u), ecx, edx, 2, eax, edx);
                t2 = g->edx;
                if ((uint8_t)t1 != 0u)
                {
                    edx = t2;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t3 = cow_thiscall(g, COW_IMG(0x10221db0u), self, 0);
                    t4 = g->edx;
                    g->edx = t4;
                    t5 = cow_thiscall(g, COW_IMG(0x10226650u), self, 1, edi);
                    t6 = g->edx;
                    g->edx = t6;
                    t7 = cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, t3);
                    t8 = g->edx;
                    cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, edi);
                }
            }
        }
    }
    return;
L_1022680f: ;
    edx = 0u;
    goto L_10226811;
L_10226822: ;
    ecx = 0u;
    goto L_10226824;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102267f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102267f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
