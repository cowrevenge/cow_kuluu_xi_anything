/* f_0x10323af7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10323af7(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 >= rd32(COW_IMG(0x109f83e0u)))
    {
        eax = in_eax;
        goto L_10323b78;
    }
    if (!(rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 1u))
    {
        eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_10323b78;
    }
    eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10320d4fu), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t1 = g->edx;
    if (!(rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 1u))
    {
        eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        ecx = arg1;
        edx = t1;
        esi = (arg1 & 0x1fu) * 0x24u;
        goto L_10323b5f;
    }
    eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    edx = t1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10320c66u), 1, arg1);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x1032929cu)), arg1, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = 0u;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = t7;
    }
    if (esi == 0u) goto L_10323b6d;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_stdcall(g, COW_IMG(0x10319c92u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(t10, esi);
    eax = t10;
    ecx = t11;
    edx = t12;
L_10323b5f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(t13, 9u);
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = 0xffffffffu;
L_10323b6d: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, edx, 1, 1, arg1);
    eax = esi;
L_10323b86: ;
    return eax;
L_10323b78: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t16 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    wr32(t16, 9u);
    eax = 0xffffffffu;
    goto L_10323b86;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323af7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323af7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
