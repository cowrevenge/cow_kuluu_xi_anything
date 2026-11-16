/* f_0x101316a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101316a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr16(self + 0x20u, 0u);
    if (arg1 == 0u) goto L_10131766;
    if (arg2 == 0u) goto L_10131766;
    if (rd32(arg2 + 0x14d4u) == 0u) goto L_10131766;
    eax = rd32(arg2 + 0x14d4u);
    wr16(self + 0x20u, rd16(eax));
    ecx = 0u;
    edx = (arg1 & 0xffffff00u) | rd8(arg1 + 2u);
L_101316e2: ;
    if (rd8(self + (uint16_t)ecx + 0x22u) != (uint8_t)edx) goto L_101316f5;
    eax = (uint16_t)ecx;
    if (rd32(eax * 4u + self + 0x34u) == arg3)
    {
        cf = rd32(eax * 4u + self + 0x34u) < arg3;
        pf = PARITY((uint8_t)(rd32(eax * 4u + self + 0x34u) - arg3));
        zf = rd32(eax * 4u + self + 0x34u) == arg3;
        sf = (int32_t)(rd32(eax * 4u + self + 0x34u) - arg3) < 0;
        of = ((rd32(eax * 4u + self + 0x34u) ^ arg3) & (rd32(eax * 4u + self + 0x34u) ^ rd32(eax * 4u + self + 0x34u) - arg3)) >> 0x1fu;
        goto L_101316fe;
    }
L_101316f5: ;
    if ((uint16_t)(ecx + 1u) < 0x10u)
    {
        ecx = ecx + 1u;
        goto L_101316e2;
    }
    ecx = ecx + 1u;
L_10131709: ;
    if (rd16(self + 0x20u) == 0u) goto L_10131766;
    ebx = (in_ebx & 0xffff0000u) | rd16(self + 0x20u);
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 0) goto L_10131766;
    eax = rd32(self + 8u);
    ebp = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    edi = 0u;
L_1013171f: ;
    t1 = (ecx & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + edi);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int16_t)t2 < 0)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10131748;
    }
    eax = t2;
    ecx = t3;
    pf = PARITY((uint8_t)t2);
    zf = (uint16_t)t2 == 0u;
    sf = (int16_t)t2 < 0;
    if (((uint16_t)ebx & 1u << (eax & 0x1fu)) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
        edx = 1u << (eax & 0x1fu);
        eax = (uint16_t)ebx;
        goto L_10131754;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
    edx = 1u << (eax & 0x1fu);
    eax = (uint16_t)ebx;
L_10131748: ;
    if ((int32_t)(edi + 1u) <= (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_1013171f;
    }
    g->edi = in_edi;
    return;
L_101316fe: ;
    wr16(self + 0x20u, (uint16_t)(1u << (ecx & 0x1fu)));
    edx = 1u << (ecx & 0x1fu);
    goto L_10131709;
L_10131754: ;
    t5 = (ecx & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + edi);
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10131810u), self, 2, t5, 0u);
L_10131766: ;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101316a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101316a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
