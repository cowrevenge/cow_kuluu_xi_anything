/* f_0x1012f100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1012f100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1012f183;
    }
    ecx = t2;
    edx = t3;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_1012f183;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u) goto L_1012f183;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1012f1a0u), eax, self, g->edx, 1, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        goto L_1012f198;
    }
    edx = t5;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1012f198;
    }
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1012f198;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    if (rd32(eax + 0x170u) == 0x21u)
    {
        eax = rd32(eax + 0x170u);
        goto L_1012f168;
    }
    eax = rd32(eax + 0x170u);
    if (eax == 7u) goto L_1012f168;
    return (eax & 0xffffff00u) | 1u;
L_1012f168: ;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_1012f198;
    }
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x51u);
    return t6 & 0xffffff00u;
L_1012f183: ;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
        eax = t7;
    }
L_1012f198: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012f100(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
