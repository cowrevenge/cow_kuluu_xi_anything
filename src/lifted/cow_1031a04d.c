/* f_0x1031a04d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031a04d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329278u)), t2, 1, rd32(COW_IMG(0x103d0900u)));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
        edi = t1;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = t1;
        g->eax = eax;
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x103175f0u), g->eax, ecx, edx, 1, 4, 1u, 0x74u, in_edi, in_esi);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            ecx = 0x74u;
            edx = t8;
            esi = t7;
            goto L_1031a0a0;
        }
        eax = t7;
        edx = t8;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, rd32(COW_IMG(0x1032927cu)), 0x74u, 2, rd32(COW_IMG(0x103d0900u)), esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            goto L_1031a0a0;
        }
        eax = t9;
        ecx = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t12 = cow_cdecl(g, COW_IMG(0x1031a03au), 1, esi);
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall(g, rd32(COW_IMG(0x10329218u)), esi, 0);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(esi + 4u, 0xffffffffu);
        wr32(esi, t14);
        eax = t14;
        ecx = t15;
        edx = t16;
    }
L_1031a0a8: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x103290c4u)), ecx, 1, edi);
    t19 = g->edx;
    g->edx = t19;
    return esi;
L_1031a0a0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x1031680cu), 1, 0x10u);
    t18 = g->edx;
    eax = t17;
    ecx = 0x10u;
    edx = t18;
    goto L_1031a0a8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031a04d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031a04d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
