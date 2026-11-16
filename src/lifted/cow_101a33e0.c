/* f_0x101a33e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a33e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_edx = g->edx;

    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        esi = 0u;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        esi = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
    }
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u) goto L_101a34f2;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101a34f2;
    }
    ecx = t2;
    edx = t3;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_101a34f2;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u) goto L_101a34f2;
    ecx = rd32(eax + 0xc4u);
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d4u));
        goto L_101a344b;
    }
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 0u) goto L_101a34f2;
L_101a344b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        goto L_101a34f2;
    }
    edx = t5;
    if (esi == 0u) goto L_101a3475;
    if (rd32(esi + 0x170u) == 2u)
    {
        eax = rd32(esi + 0x170u);
        goto L_101a34f2;
    }
    eax = rd32(esi + 0x170u);
    if (eax == 3u) goto L_101a34f2;
L_101a3475: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        goto L_101a3490;
    }
    eax = t6;
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) == 0u) goto L_101a34ee;
    edx = rd32(COW_IMG(0x1057876cu));
L_101a3490: ;
    t8 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
    t9 = rd32(COW_IMG(0x10578170u));
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t8);
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        goto L_101a34ee;
    }
    t11 = rd32(rd32(COW_IMG(0x106627a0u)) + 8u);
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t11);
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        goto L_101a34ee;
    }
    t13 = rd32(rd32(COW_IMG(0x106627a4u)) + 8u);
    g->edx = t13;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t13);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        goto L_101a34ee;
    }
    edx = t15;
    t16 = rd32(rd32(COW_IMG(0x10578250u)) + 8u);
    t17 = rd32(COW_IMG(0x10578250u));
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t16);
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        goto L_101a34f2;
    }
    eax = t18;
L_101a34ee: ;
    return (eax & 0xffffff00u) | 1u;
L_101a34f2: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a33e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a33e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
