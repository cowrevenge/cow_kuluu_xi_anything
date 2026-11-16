/* f_0x10234540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10234540(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10233f70u), ecx, 1, arg1);
        t2 = g->edx;
        if (t1 != 0u)
        {
            eax = t1;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
            t4 = g->edx;
            if (t3 != 0u)
            {
                edx = t4;
                ebx = t3;
                if (rd32(ebx + 0x1594u) != 0u)
                {
                    eax = rd32(ebx + 0x1594u);
                    if (rd16(eax) != 0u)
                    {
                        wr32(self + 0x64u, (uint8_t)arg1);
                        g->eax = rd32(ebx + 0x1594u);
                        t5 = rd32(ebx + 0x1594u);
                        t6 = rd16(rd32(ebx + 0x1594u));
                        g->esp = sp0 - 0xcu;
                        t7 = cow_fastcall(g, COW_IMG(0x10221a30u), self, edx, 0);
                        t8 = g->edx;
                        g->edx = t8;
                        t9 = cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, 0u, (uint16_t)t6, 8u);
                        t10 = g->edx;
                        cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, (uint16_t)t6, 0u);
                        wr32(self + 0x1cu, COW_IMG(0x102345f0u));
                        if ((int32_t)(uint16_t)t6 <= 0) goto L_102345e5;
                        esi = (uint16_t)t6;
                        edi = 0u;
L_102345cb: ;
                        t11 = rd32(edi * 4u + rd32(ebx + 0x1598u));
                        g->esp = sp0 - 0xcu;
                        cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t11);
                        if ((int32_t)(edi + 1u) < (int32_t)esi)
                        {
                            edi = edi + 1u;
                            goto L_102345cb;
                        }
                    }
                }
            }
        }
    }
L_102345e5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10234540(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
