/* f_0x1000f790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000f790(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u)
    {
        esi = rd32(COW_IMG(0x10456700u));
        goto L_1000f7ae;
    }
    return 0x80004003u;
L_1000f7ae: ;
    wr32(arg3, 0u);
    if (rd32(esi) == 0u)
    {
        edx = in_edx;
        goto L_1000f85f;
    }
    eax = rd32(esi);
    edx = rd32(COW_IMG(0x104566f0u));
L_1000f7c9: ;
    if (rd32(esi + 8u) == 0u) goto L_1000f7ee;
    if (rd32(arg1) != rd32(eax)) goto L_1000f7ee;
    if (rd32(arg1 + 4u) != rd32(eax + 4u)) goto L_1000f7ee;
    if (rd32(arg1 + 8u) != rd32(eax + 8u)) goto L_1000f7ee;
    if (rd32(arg1 + 0xcu) == rd32(eax + 0xcu)) goto L_1000f80f;
L_1000f7ee: ;
    if (edx != 0x64u)
    {
        esi = esi + 0x24u;
    }
    else
    {
        esi = esi + 0x1cu;
    }
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        goto L_1000f7c9;
    }
    g->edx = edx;
    return 0x80040111u;
L_1000f80f: ;
    if (rd32(esi + 0x10u) != 0u)
    {
        eax = rd32(esi + 0x10u);
        ebp = 0u;
        edi = esi + 0x10u;
    }
    else
    {
        eax = rd32(esi + 0x10u);
        edi = esi + 0x10u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), arg1, 1, COW_IMG(0x1045673cu));
        t2 = g->ecx;
        t3 = g->edx;
        if (rd32(edi) != 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            ebp = 0u;
        }
        else
        {
            ecx = t2;
            edx = t3;
            t4 = rd32(esi + 0xcu);
            g->eax = t4;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t5 = cow_thiscall(g, rd32(esi + 8u), ecx, 3, t4, COW_IMG(0x1034a128u), edi);
            t6 = g->ecx;
            t7 = g->edx;
            eax = t5;
            ecx = t6;
            edx = t7;
            ebp = t5;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x1045673cu));
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if (rd32(edi) != 0u)
    {
        edi = rd32(edi);
        g->eax = eax;
        g->edx = arg2;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, rd32(rd32(edi)), rd32(edi), 3, edi, arg2, arg3);
        t11 = g->edx;
        edx = t11;
        ebp = t10;
    }
    if (rd32(arg3) != 0u) goto L_1000f864;
    if (ebp != 0u) goto L_1000f864;
L_1000f85f: ;
    ebp = 0x80040111u;
L_1000f864: ;
    g->edx = edx;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000f790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000f790(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
