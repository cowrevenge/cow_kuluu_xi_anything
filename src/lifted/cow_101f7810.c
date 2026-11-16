/* f_0x101f7810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f7810(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        if (arg1 == 1u) goto L_101f7836;
        if (arg1 != 4u)
        {
            edi = 2u;
            goto L_101f783b;
        }
L_101f7836: ;
        edi = 1u;
L_101f783b: ;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t2 = g->edx;
        if (t1 != 0u)
        {
            edx = t2;
            esi = t1;
            g->eax = rd32(esi);
            t3 = rd32(esi);
            g->esp = sp0 - 0x1cu;
            t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), esi, 0);
            t5 = rd32(t4);
            t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
            t7 = rd32(t6 + 4u);
            g->eax = t7;
            t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
            t9 = rd32(t8 + 8u);
            cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
            if (rd32(COW_IMG(0x10663888u)) != 0u)
            {
                loc_10 = t5;
                loc_c = t7;
                loc_8 = t9;
                g->edx = loc_10;
                g->esp = sp0 - 0x30u;
                t10 = cow_thiscall(g, COW_IMG(0x101811d0u), rd32(COW_IMG(0x10631f24u)), 3, loc_10, loc_c, loc_8);
                t11 = g->edx;
                t12 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
                g->edi = edi;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x101f9a50u), rd32(COW_IMG(0x10663888u)), 7, t12, t10, arg1, edi, 0u, 0u, 1u);
            }
        }
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f7810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
