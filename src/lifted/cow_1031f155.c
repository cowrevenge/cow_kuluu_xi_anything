/* f_0x1031f155 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031f155(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10320c66u), 1, arg1);
    t2 = g->edx;
    if (t1 != 0xffffffffu)
    {
        eax = t1;
        edx = t2;
        goto L_1031f174;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t4 = g->edx;
    wr32(t3, 9u);
    eax = t3;
    edx = t4;
L_1031f1a1: ;
    eax = 0xffffffffu;
L_1031f1c5: ;
    g->edx = edx;
    return eax;
L_1031f174: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x103292b4u)), arg1, 4, eax, arg2, 0u, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0xffffffffu)
    {
        ecx = t6;
        edx = t7;
        edi = t5;
        eax = 0u;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t5;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if (eax == 0u) goto L_1031f1a6;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, eax);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_1031f1a1;
L_1031f1a6: ;
    t13 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    wr8((arg1 & 0x1fu) * 0x24u + t13 + 4u, rd8((arg1 & 0x1fu) * 0x24u + t13 + 4u) & 0xfdu);
    eax = edi;
    goto L_1031f1c5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f155(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031f155(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
