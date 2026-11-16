/* f_0x101f0d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f0d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg2 >= 0x51u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101f0e0b;
    }
    if (arg4 == 0u)
    {
        eax = arg4;
        edx = in_edx;
        goto L_101f0e0b;
    }
    if (arg1 - 0xau > 6u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
        goto L_101f0d8b;
    }
    t1 = rd32(COW_IMG(0x101f0e14u) + arg1 * 4u - 0x28u);
    switch (t1 - RD)
    {
    case 0x101f0d55u: goto L_101f0d55;
    case 0x101f0d5du: goto L_101f0d5d;
    case 0x101f0d65u: goto L_101f0d65;
    case 0x101f0d6du: goto L_101f0d6d;
    case 0x101f0d75u: goto L_101f0d75;
    case 0x101f0d7du: goto L_101f0d7d;
    case 0x101f0d85u: goto L_101f0d85;
    default: rt_fatal(g, COW_IMG(0x101f0d4eu), "switch");
    }
    return 0;
L_101f0d55: ;
    ecx = rd32(COW_IMG(0x10666e50u));
L_101f0d8b: ;
    if (rd8(ecx + (uint8_t)arg2 * 0x18u + 0x7cu) != (uint8_t)arg2)
    {
        eax = ((uint8_t)arg2 * 3u & 0xffffff00u) | rd8(ecx + (uint8_t)arg2 * 0x18u + 0x7cu);
        edx = in_edx;
        goto L_101f0e0b;
    }
    eax = ((uint8_t)arg2 * 3u & 0xffffff00u) | rd8(ecx + (uint8_t)arg2 * 0x18u + 0x7cu);
    esi = ecx + (uint8_t)arg2 * 0x18u + 0x6cu;
    if (rd16(esi + 0x14u) != (uint16_t)arg3)
    {
        edx = in_edx;
        goto L_101f0e0b;
    }
    ecx = (ecx & 0xffff0000u) | rd16(esi + 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x101cc3e0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101f0e0b;
    }
    edx = t3;
    if (rd32(esi + 4u) != 8u)
    {
        eax = rd32(esi + 4u);
        goto L_101f0dc5;
    }
    eax = rd32(esi + 4u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101f0d5d: ;
    ecx = rd32(COW_IMG(0x10666e54u));
    goto L_101f0d8b;
L_101f0d65: ;
    ecx = rd32(COW_IMG(0x10666e58u));
    goto L_101f0d8b;
L_101f0d6d: ;
    ecx = rd32(COW_IMG(0x10666e5cu));
    goto L_101f0d8b;
L_101f0d75: ;
    ecx = rd32(COW_IMG(0x10666e60u));
    goto L_101f0d8b;
L_101f0d7d: ;
    ecx = rd32(COW_IMG(0x10666e64u));
    goto L_101f0d8b;
L_101f0d85: ;
    ecx = rd32(COW_IMG(0x10666e68u));
    goto L_101f0d8b;
L_101f0dc5: ;
    if (eax == 0x16u) goto L_101f0de7;
    if (eax == 0x17u) goto L_101f0de7;
    g->ebx = arg2;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), edx, 2, arg2, arg1);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_101f0def;
    }
    eax = t4;
    edx = t5;
    if (rd8(esi + 0x11u) == 0u) goto L_101f0def;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x11u);
L_101f0de7: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101f0def: ;
    if (rd32(esi + 4u) == 5u)
    {
        eax = rd32(esi + 4u);
        goto L_101f0e0b;
    }
    eax = rd32(esi + 4u);
    if (eax == 4u) goto L_101f0e0b;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax >> 0xau & 0xffffff00u) | (rd16(esi + 0x12u) >> 0xau & 1u);
L_101f0e0b: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0d20(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
