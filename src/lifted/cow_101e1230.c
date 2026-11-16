/* f_0x101e1230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e1230(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_edi = g->edi;

    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
        edx = in_edx;
        goto L_101e12d1;
    }
    if (rd32(self + 0x70u) != 2u)
    {
        eax = rd32(self + 0x70u);
        ecx = rd32(self + 8u);
        edx = in_edx;
        esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    }
    else
    {
        ecx = rd32(self + 8u);
        esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        if ((int32_t)esi >= 8)
        {
            loc_c = esi + 1u;
        }
        else
        {
            loc_c = 9u;
        }
        g->edi = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101187a0u), ecx, 1, loc_c);
        t2 = g->edx;
        g->edx = t2;
        t3 = rd32(COW_IMG(0x105781f8u));
        t4 = cow_thiscall(g, COW_IMG(0x1013a320u), t3, 2, t1, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if ((int32_t)esi >= 10) goto L_101e12d1;
    if (rd16(esi * 2u + self + 0x22u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 2u + self + 0x22u);
        goto L_101e1293;
    }
    eax = (eax & 0xffff0000u) | rd16(esi * 2u + self + 0x22u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, 0u, 0u);
    t8 = g->edx;
    g->edi = in_edi;
    g->edx = t8;
    return t7;
L_101e1293: ;
    if (rd32(self + 0x70u) != 2u) goto L_101e12ae;
    g->edi = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, eax, 0u, 0u, 0u);
    t10 = g->edx;
    g->edi = in_edi;
    g->edx = t10;
    return t9;
L_101e12ae: ;
    t11 = rd8(esi + self + 0x15u);
    wr8(sp0 + 4u, (uint8_t)t11);
    t12 = rd32(sp0 + 4u);
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, t12);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x1013e2f0u), t13, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, t13, 0u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_101e12d1: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1230(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
