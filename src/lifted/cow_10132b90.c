/* f_0x10132b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10132b90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (self & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    t2 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    if (arg1 != 0u)
    {
        eax = (uint32_t)(int16_t)t3;
        goto L_10132bb5;
    }
    eax = (uint32_t)(int16_t)t3;
    return eax & 0xffffff00u;
L_10132bb5: ;
    if ((int32_t)eax >= 0) goto L_10132bc0;
    return eax & 0xffffff00u;
L_10132bc0: ;
    if (rd32(rd32(COW_IMG(0x10663740u)) + 0x60u) != 0u)
    {
        ecx = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
        edx = rd32(COW_IMG(0x10663740u));
        goto L_10132bd4;
    }
    return eax & 0xffffff00u;
L_10132bd4: ;
    if (rd8(arg1 + 2u) != rd8(eax + self + 0x22u))
    {
        ecx = rd32(ecx);
        edx = (edx & 0xffffff00u) | rd8(arg1 + 2u);
        ebx = (in_ebx & 0xffffff00u) | rd8(eax + self + 0x22u);
        goto L_10132bf0;
    }
    ecx = rd32(ecx);
    edx = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    ebx = (in_ebx & 0xffffff00u) | rd8(eax + self + 0x22u);
    if (ecx != rd32(eax * 4u + self + 0x34u)) goto L_10132bf0;
    loc_14 = ecx;
    loc_18 = eax;
    loc_1c = 0u;
L_10132bf5: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x101327d0u), 4, loc_1c, loc_18, loc_14, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t4;
        if (rd32(COW_IMG(0x105783e4u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x105783e4u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10147000u), eax, ecx, g->edx, 1, 0);
            t6 = g->edx;
            edx = t6;
        }
        g->eax = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, rd32(t7 + 0x4cu), self, 1, 1u);
        eax = t8;
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_10132bf0: ;
    loc_14 = ecx;
    loc_18 = eax;
    loc_1c = arg1;
    goto L_10132bf5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132b90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
