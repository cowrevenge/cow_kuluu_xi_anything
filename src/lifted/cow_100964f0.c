/* f_0x100964f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100964f0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = t1;
        goto L_10096601;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    if (esi == 0u) goto L_10096601;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1008b3a0u), eax, esi, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_10096601;
    }
    ecx = t4;
    edx = t5;
    if (rd32(esi + 0x12cu) >> 5u & 1u)
    {
        eax = rd32(esi + 0x12cu) >> 5u;
        goto L_10096601;
    }
    eax = rd32(esi + 0x12cu) >> 5u;
    if (rd8(COW_IMG(0x10482f18u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
        goto L_10096601;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
    if (rd8(COW_IMG(0x10487e49u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e49u));
        goto L_10096601;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e49u));
    if (rd8(COW_IMG(0x10487e48u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_10096601;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10096270u), ecx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_10096601;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if (rd8(COW_IMG(0x10482f43u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f43u));
        goto L_10096601;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0xeu);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        goto L_10096601;
    }
    ecx = t10;
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x279u);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        goto L_10096601;
    }
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x100956c0u), esi, 1, 0xffu);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        goto L_10096601;
    }
    eax = t14;
    edx = t15;
    if (rd32(esi + 0x170u) == 0x2cu) goto L_10096601;
    t16 = rd32(esi + 0x16cu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x100956c0u), esi, 1, t16);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        goto L_10096601;
    }
    eax = t17;
    edx = t18;
    if (rd32(esi + 0x16cu) == 0x2cu) goto L_10096601;
    if ((rd32(esi + 0x128u) >> 0xfu & 1u) == 1u) goto L_10096601;
    if (rd32(COW_IMG(0x10578198u)) == 0u) goto L_100965ea;
    ecx = rd32(COW_IMG(0x10578198u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x1012f1a0u), eax, ecx, g->edx, 1, 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        goto L_10096601;
    }
    eax = t19;
    edx = t20;
L_100965ea: ;
    if (rd32(COW_IMG(0x10578450u)) == 0u) goto L_100965fd;
    ecx = rd32(COW_IMG(0x10578450u));
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, COW_IMG(0x1014cff0u), ecx, 0);
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        goto L_10096601;
    }
    eax = t21;
L_100965fd: ;
    return (eax & 0xffffff00u) | 1u;
L_10096601: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100964f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100964f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
