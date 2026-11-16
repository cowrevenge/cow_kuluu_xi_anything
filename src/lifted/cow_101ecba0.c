/* f_0x101ecba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ecba0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_101ecc58;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_101ecc58;
    }
    if ((int32_t)(rd32(rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u) + 4u) & 0x7fffffffu) > (int32_t)arg2)
    {
        eax = arg2;
        goto L_101ecc58;
    }
    ebp = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    esi = rd32(rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u) + 4u) & 0x7fffffffu;
    if (rd8(ebp + 2u) == 0u)
    {
        eax = (arg2 & 0xffffff00u) | rd8(ebp + 2u);
        goto L_101ecc58;
    }
    g->edx = rd16(ebp);
    t1 = rd16(ebp);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101ecc58;
    }
    eax = t2;
    edx = t3;
    wr8(self + 0x10u, 1u);
    wr8(self + 0x11u, (uint8_t)arg1);
    if (esi == 0u)
    {
        ecx = rd16(rd32(eax + 0x14c0u));
    }
    else
    {
        ecx = rd16(rd32(eax + 0x14c0u));
        t4 = cow_divs(g, arg2, esi);
        t5 = cow_mods(g, arg2, esi);
        if ((int32_t)ecx <= (int32_t)t4)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
            ecx = eax;
        }
    }
    if ((int32_t)ecx <= (int32_t)rd8(ebp + 2u))
    {
        eax = rd8(ebp + 2u);
    }
    else
    {
        eax = rd8(ebp + 2u);
        ecx = eax;
    }
    if (ecx == 0u) goto L_101ecc58;
    g->ebx = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1013a870u), rd32(COW_IMG(0x10578200u)), 5, 1u, ecx, COW_IMG(0x101ecc70u), ebp, 0u);
    t7 = g->edx;
    g->ebx = in_ebx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
L_101ecc58: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ecba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ecba0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
