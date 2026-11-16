/* f_0x10142dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10142dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        if (esi != 1u)
        {
            loc_10 = 0x2beu;
        }
        else
        {
            loc_10 = 0x328u;
        }
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        loc_10 = 0x2c3u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_10);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t4, 1u);
    t7 = g->edx;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (t6 & 0xffffff00u) | (uint8_t)arg2;
        edx = t7;
        goto L_10142e78;
    }
    eax = (t6 & 0xffffff00u) | (uint8_t)arg2;
    edx = t7;
    if (rd32(arg1 + 0x38u) == 0u) goto L_10142e75;
    ecx = rd32(arg1 + 0x38u);
    if ((int32_t)esi >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        goto L_10142e75;
    }
    if (ecx + esi * 0x54u == 0u)
    {
        eax = ecx + esi * 0x54u;
        edx = esi * 0x15u;
        goto L_10142e75;
    }
    eax = ecx + esi * 0x54u;
    edx = esi * 0x15u;
    if ((int32_t)rd32(eax + 0x48u) < 29696)
    {
        eax = rd32(eax + 0x48u);
        ecx = rd32(COW_IMG(0x10578204u));
        goto L_10142e6c;
    }
    eax = rd32(eax + 0x48u);
    ecx = rd32(COW_IMG(0x10578204u));
    if (rd32(ecx + 8u) == 0u)
    {
        edx = rd32(ecx + 8u);
        goto L_10142e75;
    }
    edx = rd32(ecx + 8u);
    g->edi = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x1013e260u), eax, ecx, g->edx, 0, 4, eax, 0u, 0u, 0u);
    t9 = g->edx;
    wr32(self + 0x1cu, esi);
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_10142e6c: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10142e75: ;
    wr32(self + 0x1cu, esi);
L_10142e78: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142dd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
