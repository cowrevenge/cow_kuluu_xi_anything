/* f_0x10319505 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10319505(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(arg1 + 0xcu) & 0x83u) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        edx = in_edx;
        goto L_103195dc;
    }
    eax = rd32(arg1 + 0xcu);
    if ((eax & 0x40u) != 0u)
    {
        edx = in_edx;
        goto L_103195dc;
    }
    if ((eax & 2u) == 0u) goto L_1031952b;
    t1 = (eax & 0xffffff00u) | (uint8_t)(eax | 0x20u);
    wr32(arg1 + 0xcu, t1);
    eax = t1;
    edx = in_edx;
L_103195dc: ;
    g->edx = edx;
    return 0xffffffffu;
L_1031952b: ;
    t2 = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
    wr32(arg1 + 0xcu, t2);
    if ((((eax & 0xffffff00u) | (uint8_t)(eax | 1u)) & 0x10cu) != 0u)
    {
        t4 = rd32(arg1 + 8u);
        wr32(arg1, t4);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t2;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10323b8au), 1, arg1);
        t3 = g->edx;
        ecx = arg1;
        edx = t3;
    }
    t5 = rd32(arg1 + 0x18u);
    t6 = rd32(arg1 + 8u);
    t7 = rd32(arg1 + 0x10u);
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x103195e1u), g->eax, g->ecx, edx, 1, 3, t7, t6, t5);
    t9 = g->edx;
    wr32(arg1 + 4u, t8);
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_103195cb;
    }
    eax = t8;
    edx = t9;
    if (eax == 0xffffffffu) goto L_103195cb;
    if ((rd32(arg1 + 0xcu) & 0x82u) != 0u)
    {
        edx = rd32(arg1 + 0xcu);
    }
    else
    {
        edx = rd32(arg1 + 0xcu);
        if (rd32(arg1 + 0x10u) == 0xffffffffu)
        {
            ecx = rd32(arg1 + 0x10u);
            edi = COW_IMG(0x103d2c10u);
        }
        else
        {
            ecx = rd32(arg1 + 0x10u);
            edi = (ecx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u);
            ecx = (ecx & 0x1fu) * 9u;
        }
        if ((rd8(edi + 4u) & 0x82u) == 0x82u)
        {
            t10 = (edx & 0xffff00ffu) | (uint8_t)(edx >> 8u | 0x20u) << 8u;
            wr32(arg1 + 0xcu, t10);
            edx = t10;
        }
    }
    if (rd32(arg1 + 0x18u) == 0x200u)
    {
        if ((rd32(arg1 + 0xcu) & 8u) != 0u)
        {
            ecx = rd32(arg1 + 0xcu);
            if ((ecx >> 8u & 4u) == 0u)
            {
                wr32(arg1 + 0x18u, 0x1000u);
            }
        }
    }
    t11 = rd32(arg1);
    wr32(arg1 + 4u, eax - 1u);
    t12 = rd8(t11);
    wr32(arg1, t11 + 1u);
    g->edx = edx;
    return t12;
L_103195cb: ;
    wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | (-(eax != 0u) & 0x10u) + 0x10u);
    wr32(arg1 + 4u, 0u);
    eax = (-(eax != 0u) & 0x10u) + 0x10u;
    goto L_103195dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319505(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319505(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
