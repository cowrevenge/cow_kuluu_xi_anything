/* f_0x1009fed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009fed0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1009ffb9;
    }
    edx = t2;
    edi = t1;
    if (rd32(edi + 0x78u) != rd32(arg3 + 4u))
    {
        eax = arg3;
        goto L_1009ffb9;
    }
    if (rd32(arg3 + 8u) == 0u)
    {
        eax = arg3;
        goto L_1009ffb9;
    }
    ecx = rd32(arg3 + 8u);
    esi = 0u;
L_1009fefe: ;
    if (rd32(COW_IMG(0x10480af0u) + esi * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
        goto L_1009ff1c;
    }
    eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        edx = rd32(eax + 0x120u) >> 9u;
        goto L_1009ff1c;
    }
    edx = rd32(eax + 0x120u) >> 9u;
    if (rd32(eax + 0x78u) == ecx) goto L_1009ff2a;
L_1009ff1c: ;
    if ((int32_t)(esi + 1u) < 2304)
    {
        esi = esi + 1u;
        goto L_1009fefe;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ff2a: ;
    if (rd8(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0xeeu) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
        goto L_1009ff5d;
    }
    eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0xeeu);
    if ((uint8_t)ecx == 2u) goto L_1009ff5d;
    if ((uint8_t)ecx == 6u) goto L_1009ff5d;
    if ((uint8_t)ecx == 7u) goto L_1009ff5d;
    if ((uint8_t)ecx != 1u) goto L_1009ffb9;
    if (!(rd32(eax + 0x120u) >> 0xdu & 1u)) goto L_1009ffb9;
L_1009ff5d: ;
    t3 = rd32(eax + 0x78u);
    t4 = rd32(eax + 0x74u);
    g->edx = t3;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10157c60u), rd32(COW_IMG(0x1057876cu)), 4, t4, t3, 1u, 1u);
    t6 = g->edx;
    if (rd32(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0x120u) >> 0xdu & 1u)
    {
        eax = t5;
        edx = t6;
        goto L_1009ffa5;
    }
    eax = t5;
    edx = t6;
    esi = rd32(COW_IMG(0x10480af0u) + esi * 4u);
    if (rd8(edi + 0x1ffu) < 8u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 0x1ffu);
        goto L_1009ffb9;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 0x1ffu);
    if ((uint8_t)eax > 9u) goto L_1009ffb9;
    if (rd8(esi + 0x1ffu) < 8u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x1ffu);
        goto L_1009ffb9;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0x1ffu);
    if ((uint8_t)eax > 9u) goto L_1009ffb9;
L_1009ffa5: ;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x51u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x51u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x51u);
        ecx = rd32(COW_IMG(0x1057876cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x10157660u), ecx, 1, 1u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
L_1009ffb9: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009fed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009fed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
