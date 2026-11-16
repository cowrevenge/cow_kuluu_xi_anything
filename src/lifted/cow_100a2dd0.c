/* f_0x100a2dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a2dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    const uint32_t in_ebx = g->ebx;

    t1 = rd32(sp0 + 4u);
    wr32(self + 0x34u, 0u);
    wr8(self + 0x59u, rd8(t1 + 5u));
    g->ebx = t1;
    g->edx = in_edx;
    t2 = rd8(t1 + 5u);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x100a2c30u), self, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        loc_4 = self;
        goto L_100a2eed;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = t1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x100a2c70u), eax, ecx, g->edx, 0, 1, ebx);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        loc_4 = self;
        goto L_100a2eed;
    }
    eax = t6;
    t8 = rd32(ebx + 0x14u);
    t9 = rd32(ebx + 0x10u);
    t10 = (eax & 0xffffff00u) | rd8(ebx + 4u);
    g->ebx = ebx;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x100a2be0u), self, 3, t10, t9, t8);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
        loc_4 = self;
        goto L_100a2eed;
    }
    edx = t12;
    t13 = rd32(ebx + 0x14u);
    t14 = rd8(ebx + 6u);
    wr32(sp0 + 4u, ebx + 0x18u);
    if ((uint8_t)t14 != 2u)
    {
        eax = ebx + 0x18u;
        esi = 0u;
        loc_4 = t13;
    }
    else
    {
        eax = ebx + 0x18u;
        loc_4 = t13;
        wr32(sp0 + 4u, eax + 0x28u);
        edx = eax + 0x28u;
        esi = eax;
    }
    if (rd8(ebx + 4u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 4u);
        goto L_100a2e9b;
    }
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        t15 = rd32(self + 0x48u);
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, eax, t15, 2, t15, ebx);
    }
    t16 = rd32(ebx + 8u);
    wr32(self + 0x5cu, t16);
    t17 = rd32(ebx + 0xcu);
    wr32(self + 0x60u, t17);
    if (rd32(self + 0x48u) == 0u)
    {
        eax = rd32(self + 0x48u);
    }
    else
    {
        eax = rd32(self + 0x48u);
        t18 = rd32(ebx + 8u);
        wr32(eax + 4u, t18);
        t19 = rd32(ebx + 0xcu);
        wr32(rd32(self + 0x48u) + 8u, t19);
        eax = t19;
    }
    if (rd8(ebx + 6u) == 2u)
    {
        if (rd32(self + 0x48u) == 0u)
        {
            eax = rd32(self + 0x48u);
        }
        else
        {
            eax = rd32(self + 0x48u);
            wr32(eax + 0x18u, rd32(esi));
            esi = esi + 4u;
            edi = rd32(self + 0x48u) + 0x1cu;
            ecx = 9u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        }
    }
L_100a2eb3: ;
    t20 = rd32(sp0 + 4u);
    g->edx = t20;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100a2cd0u), self, 3, ebx, t20, loc_4);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x100a2f00u), self, 0);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        goto L_100a2ee0;
    }
    eax = t22;
    edx = t23;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t24 = cow_fastcall(g, COW_IMG(0x100a29b0u), self, edx, 0);
    g->ebx = in_ebx;
    return (t24 & 0xffffff00u) | 1u;
L_100a2e9b: ;
    if ((uint8_t)eax != 2u) goto L_100a2eed;
    if (rd32(ebx + 8u) != rd32(self + 0x5cu))
    {
        eax = rd32(self + 0x5cu);
        edx = rd32(ebx + 8u);
        goto L_100a2eed;
    }
    edx = rd32(ebx + 8u);
    if (rd32(ebx + 0xcu) != rd32(self + 0x60u))
    {
        eax = rd32(ebx + 0xcu);
        goto L_100a2eed;
    }
    eax = rd32(ebx + 0xcu);
    goto L_100a2eb3;
L_100a2ee0: ;
    wr8(self + 0x58u, 2u);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_100a2eed: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t25 = cow_fastcall(g, COW_IMG(0x100a29f0u), self, edx, 0);
    g->ebx = in_ebx;
    return t25 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2dd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
