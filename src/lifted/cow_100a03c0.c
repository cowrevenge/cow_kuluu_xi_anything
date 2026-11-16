/* f_0x100a03c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a03c0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebx);
    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_100a0401;
    }
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    wr32(sp0 - 0x18u, 0x81u);
    wr32(sp0 - 0x1cu, 9u);
    wr8(sp0 + 0xcu, 0xbfu);
    wr8(sp0 + 0xdu, 0u);
    wr8(sp0 + 0xeu, 0u);
    g->eax = sp0 + 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x81u);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->ebx = 0u;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, t1, sp0 + 0xcu, 0u, 1u, 0u);
    g->ebx = in_ebx;
    return t3 & 0xffffff00u;
L_100a0401: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_100a0410;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_100a0410: ;
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10123e60u), eax, g->ecx, g->edx, 1, 1, 1u);
    t4 = g->edx;
    t5 = rd32(sp0 + 0xcu);
    wr8(COW_IMG(0x10487e48u), 1u);
    t6 = rd16(t5 + 0xeu);
    wr16(COW_IMG(0x104804c4u), 0u);
    wr32(sp0 - 0xcu, in_ebp);
    wr16(COW_IMG(0x1047fb40u), (uint16_t)((t6 & 0xffff00ffu) | (t6 >> 8u | 0x20u) << 8u));
    wr32(sp0 - 0x10u, in_edi);
    eax = 0u;
    ecx = t5 + 0x10u;
    esi = t5;
L_100a0442: ;
    wr32(COW_IMG(0x10488d08u) + eax, rd32(ecx));
    t7 = rd32(ecx + 4u);
    wr32(COW_IMG(0x10488d0cu) + eax, t7);
    t8 = rd32(ecx + 8u);
    wr32(COW_IMG(0x10488d10u) + eax, t8);
    t9 = rd32(ecx + 0xcu);
    wr8(COW_IMG(0x10488d18u) + eax, 0u);
    wr32(COW_IMG(0x10488d14u) + eax, t9);
    wr32(COW_IMG(0x104882b8u) + eax, rd32(ecx));
    t10 = rd32(ecx + 4u);
    wr32(COW_IMG(0x104882bcu) + eax, t10);
    t11 = rd32(ecx + 8u);
    wr32(COW_IMG(0x104882c0u) + eax, t11);
    t12 = rd32(ecx + 0xcu);
    wr8(COW_IMG(0x10488c18u) + eax + 0x100u, 0u);
    wr32(COW_IMG(0x104882c4u) + eax, t12);
    if ((int32_t)(eax + 0x100u) < 1024)
    {
        eax = eax + 0x100u;
        ecx = ecx + 0x10u;
        goto L_100a0442;
    }
    edx = COW_IMG(0x104882b8u) + eax;
    eax = eax + 0x100u;
    if ((rd8(esi + 0xeu) & 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0xeu);
    }
    else
    {
        eax = COW_IMG(0x10488800u);
        ecx = esi + 0x50u;
L_100a04aa: ;
        t13 = rd32(ecx);
        wr32(eax, t13);
        if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10488820u))
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            goto L_100a04aa;
        }
        eax = eax + 4u;
        edx = t13;
    }
    t14 = (edx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c35au);
    wr32(sp0 - 0xcu, t14);
    t15 = (eax & 0xffff0000u) | rd16(esi + 0xau);
    wr32(sp0 - 0x10u, t15);
    t16 = (rd32(COW_IMG(0x104dfd98u)) & 0xffff0000u) | rd16(esi + 0xcu);
    wr32(sp0 - 0x14u, t16);
    wr32(sp0 - 0x18u, t15);
    g->eax = t15;
    g->edx = t14;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x100aed00u), 4, t15, t16, t15, t14);
    t18 = g->edx;
    t19 = rd16(esi + 0xau);
    wr16(COW_IMG(0x10485f7cu), (uint16_t)t19);
    t20 = rd16(esi + 0xcu);
    wr16(COW_IMG(0x1047fb3au), (uint16_t)t20);
    t21 = rd32(esi + 4u);
    wr32(COW_IMG(0x10480aa4u), t21);
    t22 = rd32(sp0 - 8u);
    wr16(COW_IMG(0x10482f1au), rd16(esi + 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = t22;
    return (((t17 & 0xffff0000u) | t20) & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a03c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a03c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
