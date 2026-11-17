/* f_0x10261ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10261ae0(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    g->eax = arg1;
    g->edx = rd32(arg1 - 0x10u);
    t1 = rd32(arg1 - 0x10u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x20u), arg1 - 0x10u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        goto L_10261afd;
    }
    edx = t4;
    g->edx = edx;
    return 1u;
L_10261afd: ;
    wr32(sp0 - 8u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103294b8u)), 1, 0u);   /* ole32.dll!CoInitialize */
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 8u, sp0 + 4u);
    wr32(sp0 - 0xcu, COW_IMG(0x1033e858u));
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, COW_IMG(0x1033fe18u));
    g->eax = sp0 + 4u;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x103294a4u)), 5, COW_IMG(0x1033fe18u), 0u, 1u, COW_IMG(0x1033e858u), sp0 + 4u);   /* ole32.dll!CoCreateInstance */
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7;
        edx = t9;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 0xcu, arg1);
        wr32(sp0 - 0x10u, esi);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10265710u), arg1, 3, esi, arg1, 1u);
        t10 = g->ecx;
        wr32(sp0 - 8u, arg1);
        g->eax = arg1;
        g->edx = rd32(arg1);
        t11 = rd32(arg1);
        t12 = cow_thiscall(g, rd32(t11 + 8u), t10, 1, arg1);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_stdcall(g, rd32(COW_IMG(0x103294c0u)), 0);   /* ole32.dll!CoFreeUnusedLibraries */
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    cow_stdcall(g, rd32(COW_IMG(0x103294b4u)), 0);   /* ole32.dll!CoUninitialize */
    t18 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t18;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261ae0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
