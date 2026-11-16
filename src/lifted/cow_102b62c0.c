/* f_0x102b62c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b62c0(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(sp0 + 4u) + 0x14u;
    t2 = rd32(rd32(sp0 + 4u) + 0x48u);
    g->ecx = t2;
    g->edx = in_edx;
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102ba520u), 2, t2, t1);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(t3 + 0x34u) != 0u)
    {
        eax = rd32(t3 + 0x34u);
        ecx = t5;
        edx = t6;
        ebp = t3;
        esi = t4;
        eax = rd32(eax + 0x54u);
    }
    else
    {
        ecx = t5;
        edx = t6;
        ebp = t3;
        esi = t4;
        eax = 0u;
    }
    wr32(esi + 0xcu, eax);
    if (rd32(ebp + 0x4cu) == 0u) goto L_102b635f;
    eax = rd32(ebp + 0x4cu);
    t7 = rd32(ebp + 0x44u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t7 <= 0) goto L_102b63a0;
    ecx = t7;
    ebx = 2u;
    edi = eax + 8u;
L_102b630b: ;
    t8 = rd32(edi - 8u);
    g->eax = ebx - 2u;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, ebx - 2u, t8, in_edi, in_esi, in_ebp, in_ebx);
    t10 = rd32(edi - 4u);
    g->ecx = t10;
    g->edx = ebx - 1u;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, ebx - 1u, t10, esi, ebx - 2u, t8, in_edi);
    t11 = g->ecx;
    t12 = g->edx;
    g->eax = rd32(edi);
    t13 = rd32(edi);
    g->esp = sp0 - 0x18u;
    t14 = cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, ebx, t13, esi, ebx - 1u, t10, esi);
    t15 = rd32(edi + 4u);
    g->edx = ebx + 1u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, ebx + 1u, t15, esi, ebx, t13, esi);
    t16 = g->edx;
    t17 = rd32(sp0 + 4u) + 1u;
    t18 = rd32(ebp + 0x44u);
    t19 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t17);
    if ((int32_t)(t19 + 1u) < (int32_t)t18)
    {
        ecx = t18;
        ebx = ebx + 4u;
        edi = edi + 0x10u;
        goto L_102b630b;
    }
    edx = t16;
    g->edx = edx;
    return esi;
L_102b635f: ;
    if ((int32_t)rd32(ebp + 0x44u) > 0)
    {
        ebx = 0u;
        edi = 2u;
L_102b6369: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, edi - 2u, edi - 2u, in_edi, in_esi, in_ebp, in_ebx);
        t20 = g->ecx;
        t21 = g->edx;
        g->eax = edi - 1u;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0xcu;
        t22 = cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, edi - 1u, edi - 1u, esi, edi - 2u, edi - 2u, in_edi);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, edi, edi, esi, edi - 1u, edi - 1u, esi);
        t25 = g->ecx;
        t26 = g->edx;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x102ba9d0u), 7, esi, edi + 1u, edi + 1u, esi, edi, edi, esi);
        t27 = g->ecx;
        t28 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(ebp + 0x44u))
        {
            ecx = t27;
            edx = t28;
            ebx = ebx + 1u;
            edi = edi + 4u;
            goto L_102b6369;
        }
        edx = t28;
    }
L_102b63a0: ;
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b62c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b62c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
