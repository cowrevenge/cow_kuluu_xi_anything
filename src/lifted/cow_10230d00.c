/* f_0x10230d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10230d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x8fu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x8fu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10087160u), 0);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            edx = t2;
            if (rd32(self + 0x64u) == 0u)
            {
                eax = COW_IMG(0x1048058cu);
                esi = 0u;
L_10230d2d: ;
                if ((rd32(eax) & 0xfffu) != 0u)
                {
                    esi = esi + 1u;
                }
                if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x104805dcu))
                {
                    eax = eax + 4u;
                    goto L_10230d2d;
                }
                eax = eax + 4u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t3 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, esi, 0u, 8u);
                t4 = g->edx;
                cow_fastcall(g, COW_IMG(0x10221a80u), self, t4, 2, esi, 0u);
                eax = 0u;
                edx = COW_IMG(0x1048058cu);
L_10230d5f: ;
                if ((rd32(edx) & 0xfffu) != 0u)
                {
                    esi = rd32(edx) & 0xfffu;
                    if ((int32_t)eax >= 0)
                    {
                        if ((int32_t)eax < (int32_t)rd32(self + 0x44u))
                        {
                            if (eax * 8u + rd32(self + 0x20u) != 0u)
                            {
                                ecx = eax * 8u + rd32(self + 0x20u);
                                wr32(ecx, esi + 0xe000u);
                                eax = eax + 1u;
                            }
                        }
                    }
                }
                if ((int32_t)(edx + 4u) < (int32_t)COW_IMG(0x104805dcu))
                {
                    edx = edx + 4u;
                    goto L_10230d5f;
                }
                wr8(self + 0x8fu, 1u);
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, arg1);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230d00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
