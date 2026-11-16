/* f_0x10124eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10124eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 184u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    if (rd8(self + 0x4eu) != 0u)
    {
        if (rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u) == 0u)
        {
            edx = in_edx;
            ebx = 0u;
        }
        else
        {
            eax = rd8(self + 0x4cu) << 6u;
            ecx = rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u);
            t1 = (in_edx & 0xffff0000u) | rd16(COW_IMG(0x1036e4f8u) + eax);
            if (rd32(rd32(ecx) + (uint16_t)t1 * 4u) != 0u)
            {
                edx = t1;
                ebx = rd32(rd32(ecx) + (uint16_t)t1 * 4u);
                wr16(COW_IMG(0x1036e4f8u) + eax, (uint16_t)(edx + 1u));
                edx = edx + 1u;
            }
            else
            {
                wr16(COW_IMG(0x1036e4f8u) + eax, 0u);
                edx = rd16(COW_IMG(0x1036e4f8u) + rd8(self + 0x4cu) * 0x40u);
                ebx = rd32(rd16(COW_IMG(0x1036e4f8u) + rd8(self + 0x4cu) * 0x40u) * 4u + rd32(rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u)));
            }
        }
        if (rd32(COW_IMG(0x10456bf8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456bf8u));
            ecx = rd32(COW_IMG(0x1045666cu));
            if (ecx != 0u)
            {
                wr32(sp0 - 0x68u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x64u;
                cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 0u);
                t5 = g->edx;
                edx = t5;
            }
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            t6 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
            t7 = g->edx;
            g->edx = t7;
            cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
            t8 = g->edx;
            t9 = rd32(COW_IMG(0x1036e4f4u) + rd8(self + 0x4cu) * 0x40u);
            wr32(sp0 - 0x68u, t9);
            cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t9);
            wr32(sp0 - 0x68u, sp0 - 0x50u);
            wr32(sp0 - 0x44u, 0u);
            t10 = (uint32_t)(int16_t)rd16(COW_IMG(0x1036e4fau) + rd8(self + 0x4cu) * 0x40u);
            wr32(sp0 - 0x54u, t10);
            wrf32(sp0 - 0x50u, (float)(double)(float)(double)(int32_t)t10);
            wrf32(sp0 - 0x4cu, (float)(double)(float)(double)(int32_t)t10);
            wrf32(sp0 - 0x48u, (float)(double)(float)(double)(int32_t)t10);
            g->eax = t10;
            g->edx = rd8(self + 0x4cu) << 6u;
            t11 = rd8(self + 0x4cu);
            t12 = cow_thiscall(g, COW_IMG(0x10027a60u), sp0 - 0x40u, 1, sp0 - 0x50u);
            t13 = g->edx;
            if (ebx == 0u)
            {
                eax = t12;
                edx = t13;
            }
            else
            {
                wr32(sp0 - 0x68u, 0u);
                t14 = rd32(COW_IMG(0x1036e4e8u) + rd8(self + 0x4cu) * 0x40u);
                wr32(sp0 - 0x6cu, t14);
                t15 = rd32(self + 0xcu);
                esi = sp0 - 0x40u;
                edi = sp0 - 0xacu;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t16 = rd32(self + 0x10u);
                wr32(sp0 - 0xb0u, t16);
                wr32(sp0 - 0xb4u, t15);
                g->eax = t14;
                g->edx = t15;
                g->esp = sp0 - 0x64u;
                t17 = cow_bridge_indirect(g, COW_IMG(0x1011ff70u), 0u, 20u, (const uint32_t[]){t15, t16, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), t14, 0u}, ebx, g->edx, g->eax, 0u);
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
            g->esp = sp0 - 0x64u;
            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        }
        else
        {
            eax = rd32(COW_IMG(0x10456bf8u));
            ecx = rd32(COW_IMG(0x1045666cu));
            if (ecx != 0u)
            {
                wr32(sp0 - 0x68u, 0u);
                t2 = rd8(self + 0x4cu);
                wr32(sp0 - 0x6cu, t2);
                g->eax = eax;
                g->esp = sp0 - 0x64u;
                t3 = cow_fastcall(g, COW_IMG(0x100097f0u), ecx, t2, 2, t2, 0u);
                t4 = g->edx;
                if (rd32(COW_IMG(0x1045666cu)) != 0u)
                {
                    eax = t3;
                    ecx = rd32(COW_IMG(0x1045666cu));
                    edx = t4;
                    wr32(sp0 - 0x68u, 1u);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 1u);
                }
            }
        }
        if (rd8(self + 0x4du) == 6u)
        {
            wr32(sp0 - 0x68u, 0u);
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 0x80808080u);
            wr32(sp0 - 0x78u, 0x3f800000u);
            wr32(sp0 - 0x7cu, 0x3f800000u);
            t19 = rd32(self + 0x30u);
            wr32(sp0 - 0x80u, t19);
            t20 = rd32(self + 0x2cu);
            wr32(sp0 - 0x84u, t20);
            g->esp = sp0 - 0x64u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(rd32(rd32(self + 0x40u)) + (uint32_t)(int16_t)rd16(self + 0x44u) * 4u), 8, t20, t19, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124eb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
