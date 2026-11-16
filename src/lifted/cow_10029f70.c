/* f_0x10029f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10029f70(Guest* g)
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

    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((rd8(t2 + 0x32u) & 0x7fu) == 0u)
    {
        eax = rd8(t2 + 0x32u) & 0x7fu;
        ecx = t3;
        edx = t4;
        goto L_10029fd8;
    }
    eax = rd8(t2 + 0x32u) & 0x7fu;
    ecx = t3;
    edx = t4;
    edi = t2;
    if (eax != 1u)
    {
        eax = eax - 1u;
        esi = 0u;
        goto L_10029fbd;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x1c8u);
    t6 = g->edx;
    if (t5 == 0u) goto L_10029ff7;
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10025010u), eax, 0);
    t8 = g->edx;
    if (t7 == 0u) goto L_10029ff7;
    eax = t7;
    edx = t8;
    esi = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x100250f0u), esi, 1, edi);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_10029fbd: ;
    wr32(esi + 8u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x10029f00u), self, 1, esi);
    t16 = g->edx;
    cow_thiscall(g, COW_IMG(0x1002a0c0u), self, 0);
    return esi;
L_10029fd8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x3cu);
    t12 = g->edx;
    if (t11 == 0u) goto L_10029ff7;
    eax = t11;
    edx = t12;
    esi = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x10029c90u), esi, 0);
    t14 = g->edx;
    wr32(esi, COW_IMG(0x1032a72cu));
    eax = t13;
    edx = t14;
    goto L_10029fbd;
L_10029ff7: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10029f70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
