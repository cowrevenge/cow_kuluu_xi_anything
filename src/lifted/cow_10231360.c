/* f_0x10231360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10231360(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4c;
    uint32_t loc_50;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr8(sp0 - 0x40u, rd8(COW_IMG(0x103d3c84u)));
    t1 = rd32(sp0 + 8u);
    edi = sp0 - 0x3fu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x64u, t1);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr16(sp0 - 0x48u, 0u);
    wr16(sp0 - 0x46u, 0u);
    wr16(sp0 - 0x44u, 0u);
    wr16(sp0 - 0x42u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    t2 = cow_cdecl(g, COW_IMG(0x10230a80u), 1, t1);
    t3 = g->edx;
    wr32(sp0 - 0x4cu, t2);
    if (rd32(arg1 + 0x1564u) == 0u)
    {
        eax = rd32(arg1 + 0x1564u);
        edx = t3;
        ebx = t2;
        ebp = t1;
        loc_4c = t2;
        edi = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x1564u);
        edx = t3;
        ebx = t2;
        ebp = t1;
        loc_4c = t2;
        edi = rd32(eax);
    }
    wr32(sp0 - 0x50u, edi);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)edi > 0)
    {
        loc_50 = edi;
        wrf32(sp0 + 8u, (float)fr(g, (double)(int32_t)loc_4c / (double)(int32_t)loc_50));
        d4 = fr(g, (double)(int32_t)loc_4c / (double)(int32_t)loc_50);
        if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
            wr32(sp0 + 8u, 0x3f800000u);
        }
    }
    wr32(sp0 - 0x64u, ebp);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t5 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, ebp);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        wr32(sp0 - 0x64u, arg1);
        wr32(sp0 - 0x68u, ebp);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = arg1;
        g->esp = sp0 - 0x58u;
        t8 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, ebp, arg1, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
        t9 = g->ecx;
        t10 = g->edx;
        if ((uint8_t)t8 != 1u)
        {
            ecx = t9;
            edx = t10;
        }
        else
        {
            eax = t8;
            ecx = t9;
            edx = t10;
            wr32(sp0 - 0x64u, ebp);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t11 = cow_cdecl(g, COW_IMG(0x102308a0u), 1, ebp);
            t12 = g->ecx;
            t13 = g->edx;
            if ((uint8_t)t11 != 0u)
            {
                ecx = t12;
                edx = t13;
            }
            else
            {
                ecx = t12;
                edx = t13;
                wr32(sp0 + 8u, 0x3f800000u);
                ebx = edi;
            }
        }
    }
    wr32(sp0 - 0x64u, arg3);
    t14 = rd32(sp0 + 8u);
    wr32(sp0 - 0x68u, t14);
    wr32(sp0 - 0x6cu, 0x12u);
    wr32(sp0 - 0x70u, 0xf5u);
    g->eax = t14;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t15 = cow_cdecl(g, COW_IMG(0x10231300u), 3, 0xf5u, 0x12u, t14);
    t16 = g->edx;
    wr32(sp0 - 0x64u, sp0 - 0x48u);
    g->esp = sp0 - 0x60u;
    t17 = cow_thiscall(g, COW_IMG(0x10117020u), arg3, 1, sp0 - 0x48u);
    t18 = g->ecx;
    wr32(sp0 - 0x64u, edi);
    wr32(sp0 - 0x68u, ebx);
    wr32(sp0 - 0x6cu, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x70u, sp0 - 0x40u);
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10357fbcu), ebx, edi, rd32(sp0 - 0x60u));
    wr32(sp0 - 0x74u, 0x3f800000u);
    wr32(sp0 - 0x78u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 0x80808080u);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    t19 = rd32(sp0 - 0x46u) + 0xfu;
    wr32(sp0 - 0x88u, t19);
    t20 = rd32(sp0 - 0x48u) + 0x138u;
    wr32(sp0 - 0x8cu, t20);
    g->esp = sp0 - 0x70u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t19, 7, t20, t19, sp0 - 0x40u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
