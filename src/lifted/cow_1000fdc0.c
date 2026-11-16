/* f_0x1000fdc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1000fdc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x3cu, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1000fe42;
    }
    edx = t2;
    esi = t1;
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x10010100u), esi + 4u, edx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(esi, COW_IMG(0x10329b8cu));
    cow_thiscall(g, rd32(COW_IMG(0x10329184u)), t4, 1, esi + 0x24u);
    wr32(esi, COW_IMG(0x10329b78u));
    t6 = rd32(esi);
    wr32(esi + 0x20u, arg1);
    g->eax = arg2;
    g->edx = arg3;
    t7 = cow_thiscall(g, rd32(t6), t6, 3, esi, arg2, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        edx = t9;
        ebx = t7;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebx = t7;
        ebp = esi + 0x24u;
        edi = esi + 4u;
        t10 = rd32(COW_IMG(0x103292f4u));
        wr32(esi, COW_IMG(0x10329b78u));
        wr32(edi, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, t10, ecx, 1, ebp);
        t12 = g->ecx;
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall(g, t10, t12, 1, edi + 4u);
        t15 = g->ecx;
        t16 = g->edx;
        g->edx = t16;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t17 = g->edx;
        edx = t17;
    }
    g->edx = edx;
    return ebx;
L_1000fe42: ;
    g->edx = edx;
    return 0x8007000eu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000fdc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000fdc0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
