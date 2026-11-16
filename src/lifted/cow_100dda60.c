/* f_0x100dda60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100dda60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_100ddb9c;
    }
    if (rd32(arg1 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_100ddb9c;
    }
    ebp = rd32(arg1 + 4u);
    if (arg3 == 0u) goto L_100ddaef;
    t1 = rd32(arg1 + 0xcu);
    t2 = cow_divs(g, t1, ebp);
    t3 = cow_mods(g, t1, ebp);
    if (t3 == rd32(arg1 + 8u)) goto L_100ddaef;
    ecx = t1;
    edi = 0u;
L_100dda96: ;
    if ((rd16(ecx * 0x110u + rd32(arg1)) & 0x1ffu) != 0u)
    {
        eax = ecx * 0x110u + rd32(arg1);
        edx = (rd32(arg1) & 0xffff0000u) | rd16(ecx * 0x110u + rd32(arg1));
    }
    else
    {
        eax = ecx * 0x110u + rd32(arg1);
        edx = (rd32(arg1) & 0xffff0000u) | rd16(ecx * 0x110u + rd32(arg1));
        if (edi == 0u)
        {
            edi = eax;
        }
    }
    if ((edx & 0x1ffu) != arg2) goto L_100ddacb;
    if (rd32(eax + 0x104u) == arg3) goto L_100ddadf;
L_100ddacb: ;
    t4 = cow_divs(g, ecx + 1u, ebp);
    t5 = cow_mods(g, ecx + 1u, ebp);
    t6 = cow_divs(g, t5, ebp);
    t7 = cow_mods(g, t5, ebp);
    if (t7 != rd32(arg1 + 8u))
    {
        ecx = t5;
        goto L_100dda96;
    }
    edx = t7;
L_100ddae7: ;
    if (edi != 0u) goto L_100ddb85;
L_100ddaef: ;
    t8 = rd32(arg1 + 0xcu);
    if ((int32_t)rd32(arg1 + 8u) < (int32_t)t8)
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        edi = t8;
    }
    else
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        edi = t8;
        eax = eax + ebp;
    }
    if ((int32_t)rd32(arg1 + 0x14u) <= (int32_t)eax) goto L_100ddb68;
    if (rd16(arg1 + 0x18u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x1au) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x1cu) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x1eu) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x20u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x22u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x24u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x26u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x28u) == arg2) goto L_100ddb68;
    if (rd16(arg1 + 0x2au) != arg2)
    {
        edx = rd16(arg1 + 0x2au);
        goto L_100ddb9c;
    }
L_100ddb68: ;
    t9 = cow_divs(g, ecx + 1u, ebp);
    t10 = cow_mods(g, ecx + 1u, ebp);
    if (edi == t10)
    {
        edx = t10;
        goto L_100ddb9c;
    }
    edx = t10;
    t11 = rd32(arg1);
    wr32(arg1 + 8u, edx);
    if (ecx * 0x110u + t11 == 0u) goto L_100ddb9c;
    edi = ecx * 0x110u + t11;
L_100ddb85: ;
    wr32(edi + 0x10cu, arg1);
    wr32(edi + 0x104u, arg4);
    g->edx = edx;
    return edi;
L_100ddadf: ;
    wr16(arg1 + 0x2cu, 1u);
    edx = arg3;
    edi = eax;
    goto L_100ddae7;
L_100ddb9c: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dda60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dda60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
