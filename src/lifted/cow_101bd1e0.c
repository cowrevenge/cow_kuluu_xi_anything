/* f_0x101bd1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101bd1e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(self + 5u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 5u);
        loc_4 = self;
        goto L_101bd340;
    }
    if (rd32(self + 0x2718u) == 0u)
    {
        eax = rd32(self + 0x2718u);
        loc_4 = self & 0xffffff00u;
        goto L_101bd340;
    }
    eax = 0u;
    loc_4 = self & 0xffffff00u;
L_101bd206: ;
    if (rd16(eax * 0x64u + self + 0xcu) == 0u)
    {
        eax = eax * 0x19u;
        goto L_101bd31f;
    }
    esi = eax * 0x64u + self;
    edi = eax * 0x64u + self + 0xcu;
    if ((rd32(esi + 8u) & 8u) != 0u)
    {
        edx = arg1;
        goto L_101bd274;
    }
    eax = rd32(esi + 8u);
    if ((eax & 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
        goto L_101bd24d;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
    if ((uint8_t)eax == 0u) goto L_101bd249;
    g->eax = eax;
    g->edx = esi + 0x4bu;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg2, edi, esi + 0x4bu);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    zf = (uint8_t)t1 == 0u;
L_101bd26e: ;
    if (!zf) goto L_101bd349;
L_101bd274: ;
    t7 = rd32(esi + 8u);
    if ((t7 & 2u) == 0u)
    {
        eax = t7;
        ecx = t7 & 2u;
        goto L_101bd2a4;
    }
    eax = t7;
    ecx = t7 & 2u;
    if ((eax & 4u) == 0u) goto L_101bd2a4;
    if (rd8(esi + 0x4au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
        goto L_101bd29e;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg6, edi, esi + 0x4bu);
    eax = t8;
    zf = (uint8_t)t8 == 0u;
L_101bd31d: ;
    if (!zf) goto L_101bd349;
L_101bd31f: ;
    if ((uint8_t)((uint8_t)loc_4 + 1u) < rd32(self + 0x2718u))
    {
        eax = (uint8_t)((uint8_t)loc_4 + 1u);
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
        goto L_101bd206;
    }
    eax = (uint8_t)((uint8_t)loc_4 + 1u);
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
L_101bd340: ;
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_101bd249: ;
    loc_14 = edi;
    loc_18 = arg2;
L_101bd264: ;
    g->esi = esi;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10312c8du), g->eax, g->ecx, arg1, 1, 2, loc_18, loc_14);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    zf = t5 == 0u;
    goto L_101bd26e;
L_101bd24d: ;
    if ((uint8_t)eax == 0u) goto L_101bd262;
    g->eax = esi + 0x4bu;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg1, edi, esi + 0x4bu);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    zf = (uint8_t)t3 == 0u;
    goto L_101bd26e;
L_101bd262: ;
    loc_14 = edi;
    loc_18 = arg1;
    goto L_101bd264;
L_101bd29e: ;
    edx = arg6;
L_101bd311: ;
    loc_14 = edi;
    loc_18 = edx;
L_101bd313: ;
    g->esi = esi;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x10312c8du), g->eax, g->ecx, edx, 1, 2, loc_18, loc_14);
    eax = t12;
    zf = t12 == 0u;
    goto L_101bd31d;
L_101bd2a4: ;
    if (ecx == 0u) goto L_101bd2cc;
    if (rd8(esi + 0x4au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
        goto L_101bd2c4;
    }
    g->eax = arg5;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg5, edi, esi + 0x4bu);
    eax = t9;
    zf = (uint8_t)t9 == 0u;
    goto L_101bd31d;
L_101bd2c4: ;
    ecx = arg5;
    loc_14 = edi;
    loc_18 = arg5;
    goto L_101bd313;
L_101bd2cc: ;
    if ((eax & 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
        goto L_101bd2f4;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x4au);
    if ((uint8_t)eax == 0u) goto L_101bd2ec;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg4, edi, esi + 0x4bu);
    eax = t10;
    zf = (uint8_t)t10 == 0u;
    goto L_101bd31d;
L_101bd2ec: ;
    eax = arg4;
    loc_14 = edi;
    loc_18 = arg4;
    goto L_101bd313;
L_101bd2f4: ;
    if ((uint8_t)eax == 0u) goto L_101bd30d;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x101bd510u), self, 3, arg3, edi, esi + 0x4bu);
    eax = t11;
    zf = (uint8_t)t11 == 0u;
    goto L_101bd31d;
L_101bd30d: ;
    edx = arg3;
    goto L_101bd311;
L_101bd349: ;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bd1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bd1e0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
