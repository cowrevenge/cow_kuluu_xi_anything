/* f_0x100a1a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1a00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100a1a53;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    t4 = rd32(eax + 0x78u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, t4);
    t6 = g->edx;
    eax = t5;
    ecx = arg1;
    edx = t6;
    ebx = in_ebx;
    esi = t5;
L_100a1a20: ;
    if (rd8(ecx) != rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        edx = (edx & 0xffffff00u) | rd8(ecx);
        cf = rd8(ecx) < rd8(esi);
        goto L_100a1a48;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax == 0u) goto L_100a1a44;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_100a1a48;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)eax != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_100a1a20;
    }
    ecx = ecx + 2u;
L_100a1a44: ;
    eax = 0u;
L_100a1a4d: ;
    if (eax == 0u) goto L_100a1a94;
L_100a1a53: ;
    if ((uint8_t)arg3 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_100a1a7b;
    }
    if ((uint16_t)arg2 - 0x59u > 0xeu)
    {
        eax = (uint16_t)arg2 - 0x59u;
        goto L_100a1a94;
    }
    t7 = rd32(COW_IMG(0x100a1a98u) + rd8(COW_IMG(0x100a1aa0u) + (uint16_t)arg2 - 0x59u) * 4u);
    switch (t7 - RD)
    {
    case 0x100a1a83u: ecx = rd8(COW_IMG(0x100a1aa0u) + (uint16_t)arg2 - 0x59u); goto L_100a1a83;
    case 0x100a1a94u: eax = (uint16_t)arg2 - 0x59u; goto L_100a1a94;
    default: rt_fatal(g, COW_IMG(0x100a1a74u), "switch");
    }
    return 0;
L_100a1a48: ;
    eax = -cf + 1u - cf;
    goto L_100a1a4d;
L_100a1a7b: ;
    if ((uint8_t)eax == 1u) goto L_100a1a83;
    if ((uint8_t)eax != 2u) goto L_100a1a94;
L_100a1a83: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, arg1);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_100a1a94;
    }
    eax = t8;
    edx = t9;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100a1a94: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a1a00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
