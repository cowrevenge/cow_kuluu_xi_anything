/* f_0x101e5d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101e5d60(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10663520u)) == 0u) goto L_101e5e42;
    ecx = rd32(COW_IMG(0x10663520u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101e34d0u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_101e5e42;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (arg1 != 1u)
    {
        eax = arg1;
        goto L_101e5ddc;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        goto L_101e5ddc;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    wr8(COW_IMG(0x10663558u), (uint8_t)arg2);
    t7 = rd8(esi + 1u);
    wr8(COW_IMG(0x10663559u), (uint8_t)t7);
    g->eax = (eax & 0xffffff00u) | t7;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 7u);
    t9 = g->edx;
    g->ebx = arg2;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101e5cd0u), rd8(esi), t8, 0u, 0u, 1u, 0u);
    g->ebx = in_ebx;
    return;
L_101e5ddc: ;
    t10 = (eax & 0xffffff00u) | rd8(esi);
    t11 = (ecx & 0xffffff00u) | rd8(esi + 1u);
    g->ecx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x100e95e0u), 8, arg2, t11, t10, arg1, COW_IMG(0x1037f448u), 0u, 0u, 0u);
    t13 = g->ecx;
    if ((uint8_t)t12 != 0u)
    {
        ecx = t13;
        t14 = rd8(esi + 1u);
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, t14, rd8(esi));
        t16 = g->ecx;
        if (t15 != 0u)
        {
            eax = t15;
            ecx = t16;
            t17 = rd32(eax);
            wr8(COW_IMG(0x10663514u), (uint8_t)arg2);
            wr32(COW_IMG(0x10663518u), t17);
            wr8(COW_IMG(0x1066351cu), (uint8_t)arg1);
            wr8(COW_IMG(0x1066351du), 0x3cu);
        }
        if (rd32(COW_IMG(0x10663520u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10663520u));
            wr8(eax + 0x65u, rd8(eax + 0x65u) | 1u);
        }
    }
L_101e5e42: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e5d60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
