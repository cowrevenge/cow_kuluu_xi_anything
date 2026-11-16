/* f_0x1007dc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007dc00(Guest* g)
{
    uint32_t cf;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 204u);

    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_edi);
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_1007dd2f;
    }
    if (rd32(arg2) != 3u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_1007dd2f;
    }
    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_esi);
    t1 = rd32(arg2 + 8u) + 4u;
    eax = arg1;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    ebp = rd32(arg2 + 8u);
    esi = t1;
    edi = t1;
L_1007dc40: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1007dc68;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_1007dc64;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1007dc68;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1007dc40;
    }
L_1007dc64: ;
    eax = 0u;
L_1007dc6d: ;
    if (eax != 0u) goto L_1007dd2f;
    wr32(sp0 - 0xa8u, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t2 = cow_cdecl(g, COW_IMG(0x100e0a50u), 1, edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 1u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1007dc9e;
    }
    edx = t4;
    wr32(sp0 - 0xa8u, 0xc5u);
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t5 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xc5u);
    t6 = g->edx;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t6;
    return t5;
L_1007dc68: ;
    eax = -cf + 1u - cf;
    goto L_1007dc6d;
L_1007dc9e: ;
    if (eax == 0u) goto L_1007dcbb;
    wr32(sp0 - 0xa8u, 0xc6u);
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t7 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xc6u);
    t8 = g->edx;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t8;
    return t7;
L_1007dcbb: ;
    wr32(sp0 - 0xa8u, 0u);
    t9 = rd32(ebp + 0x18u);
    wr32(sp0 - 0xacu, t9);
    wr32(sp0 - 0xb0u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t10 = cow_cdecl(g, COW_IMG(0x100e9590u), 3, 0u, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t12;
        goto L_1007dcea;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0xa8u, 0x78u);
    wr32(sp0 - 0xacu, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xb0u, t13);
    g->edx = t15;
    g->esp = sp0 - 0xa8u;
    t16 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, t13, 9u);
    t17 = g->edx;
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t17;
    return t16;
L_1007dcea: ;
    wr32(sp0 - 0xa8u, edi);
    wr32(sp0 - 0xacu, 0x16u);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    g->ecx = sp0 - 0x98u;
    g->esp = sp0 - 0xa4u;
    cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, edi);
    t18 = g->ecx;
    wr32(sp0 - 0xb4u, sp0 - 0x98u);
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, 0x76u);
    wr32(sp0 - 0xc0u, 0xau);
    wr32(sp0 - 0xc4u, 0x80u);
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    g->esp = sp0 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 0x76u, 1u, sp0 - 0x98u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xacu, 1u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, sp0 - 0x9cu);
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xa4u;
    t19 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_1007dd2f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007dc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007dc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
