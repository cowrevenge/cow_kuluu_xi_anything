/* f_0x102cf6f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102cf6f0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102cf4a0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = COW_IMG(0x10344370u) + t2 * 0x40u;
    wr32(sp0 + 4u, t5);
    eax = t5;
    ecx = t3;
    edx = t4;
    ebx = 0u;
    esi = t1;
    edi = 0u;
L_102cf711: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, esi, 3u, in_edi, in_esi, in_ebp);
    t7 = rd32(arg2 + 8u);
    wr32(edi * 4u + t7, t6 - 1u);
    if ((int32_t)rd32(edi * 4u + rd32(arg2 + 8u)) < 0)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        ebx = ebx + 6u;
    }
    if ((int32_t)(edi + 1u) < (int32_t)arg3)
    {
        eax = arg2;
        ecx = arg3;
        edi = edi + 1u;
        goto L_102cf711;
    }
    t8 = ebx + rd32(esi + 0x40u);
    t9 = rd32(esi + 0x40u);
    wr32(esi + 0x40u, t8);
    ebx = 0u;
    edi = t9;
L_102cf749: ;
    if ((int32_t)rd32(ebx * 4u + rd32(arg2 + 8u)) >= 0)
    {
        ecx = rd32(arg2 + 8u);
        ebp = rd32(ebx * 4u + rd32(arg2 + 8u));
        t10 = rd32(esi + 0x3cu);
        g->esp = sp0 - 8u;
        t11 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t10, edi, 0xau, in_edi, in_esi);
        t12 = arg4 + rd32(COW_IMG(0x10344a34u) + ebx * 4u) * 4u;
        t13 = arg4 + rd32(COW_IMG(0x10344a30u) + ebx * 4u) * 4u;
        t14 = rd32(COW_IMG(0x103cc308u) + t11 * 4u);
        t15 = rd32(sp0 + 4u);
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x102cf4d0u), t13, 13, esi, t15, ebp, t14, t13, t12, t10, edi, 0xau, in_edi, in_esi, in_ebp, in_ebx);
        edi = edi + 6u;
    }
    if ((int32_t)(ebx + 1u) < (int32_t)arg3)
    {
        ebx = ebx + 1u;
        goto L_102cf749;
    }
    ebx = ebx + 1u;
    return rd32(COW_IMG(0x10344a30u) + ebx * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf6f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cf6f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
