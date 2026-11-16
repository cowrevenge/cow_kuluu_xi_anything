/* f_0x1022a090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022a090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x106671d4u)) == 0u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106671d4u));
            g->eax = in_eax;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10221900u), ecx, 4, 0u, 0x61u, 0u, 8u);
            t2 = g->edx;
            g->edx = t2;
            cow_thiscall(g, COW_IMG(0x10221a80u), rd32(COW_IMG(0x106671d4u)), 2, 0x61u, 0u);
            t3 = g->edx;
            t4 = rd32(COW_IMG(0x106671d4u));
            wr32(t4 + 0x1cu, COW_IMG(0x1022a110u));
            eax = t4;
            ecx = rd32(COW_IMG(0x106671d4u));
            edx = t3;
            esi = 0u;
L_1022a0d4: ;
            if ((int32_t)esi >= 0)
            {
                if ((int32_t)esi < (int32_t)rd32(ecx + 0x44u))
                {
                    if (esi * 8u + rd32(ecx + 0x20u) == 0u)
                    {
                        eax = esi * 8u + rd32(ecx + 0x20u);
                        edx = rd32(ecx + 0x20u);
                    }
                    else
                    {
                        eax = esi * 8u + rd32(ecx + 0x20u);
                        edx = rd32(ecx + 0x20u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t5 = cow_cdecl(g, COW_IMG(0x10229ca0u), 3, esi, eax, arg1);
                        t6 = g->edx;
                        eax = t5;
                        ecx = rd32(COW_IMG(0x106671d4u));
                        edx = t6;
                    }
                }
            }
            if ((int32_t)(esi + 1u) < 97)
            {
                esi = esi + 1u;
                goto L_1022a0d4;
            }
            wr8(ecx + 0x8au, 1u);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022a090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
