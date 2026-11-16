/* f_0x1014ce80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014ce80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1014cfd2;
    }
    ecx = t2;
    edx = t3;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_1014cfd2;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u) goto L_1014cfd2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1014cff0u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        goto L_1014cfdf;
    }
    edx = t5;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1014cfdf;
    }
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1014cfdf;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    if (rd32(eax + 0x170u) == 0x21u)
    {
        eax = rd32(eax + 0x170u);
        goto L_1014cfc1;
    }
    eax = rd32(eax + 0x170u);
    if (eax == 7u) goto L_1014cfc1;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x10578454u)));
    if (rd32(rd32(COW_IMG(0x10663740u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
        goto L_1014cfdf;
    }
    eax = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    edx = rd32(COW_IMG(0x10663740u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e2cu)), 2, 0u, 1u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371a94u), 1u, 0u);
    t11 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371a80u), 1u, 0u);
    wr32(self + 0x14u, 1u);
    wr32(self + 0x18u, 0xffffffffu);
    t12 = rd32(COW_IMG(0x104dfd98u));
    wr32(t12 + 0x2c7c8u, 0u);
    t13 = rd32(COW_IMG(0x104dfd98u));
    wr32(t13 + 0x2c7ccu, 0u);
    t14 = rd32(COW_IMG(0x104dfd98u));
    wr32(t14 + 0x2c7d0u, 0u);
    t15 = cow_call_regs(g, COW_IMG(0x100f7b70u), t12, g->ecx, g->edx, 1, 2, 1u, 0xffffffffu);
    wr32(self + 0x1cu, 0xffffffffu);
    return (t15 & 0xffffff00u) | 1u;
L_1014cfc1: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x51u);
    return t16 & 0xffffff00u;
L_1014cfd2: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    eax = t17;
L_1014cfdf: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ce80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014ce80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
