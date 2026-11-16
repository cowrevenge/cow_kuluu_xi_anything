/* f_0x10038720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10038720(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d32;
    double d40;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_7c_f;
    uint32_t loc_80;
    uint32_t loc_88;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    d1 = (double)rdf32(sp0 + 8u);
    fpush(g, d1);
    g->esp = sp0 - 0x98u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x84u, t2);
    g->ecx = t3;
    g->edx = t4;
    d5 = (double)rdf32(sp0 + 0xcu);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x80u, t6);
    wr32(sp0 - 0x88u, arg1);
    d9 = (double)(float)fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 - 0x7cu, (float)d9);
    if (rd8(arg1) == 0u)
    {
        esi = arg1;
        edi = in_edi;
    }
    else
    {
        eax = (t6 & 0xffffff00u) | rd8(arg1);
        ecx = t7;
        edx = t8;
        ebp = t2;
        loc_80 = t6;
        loc_7c_f = d9;
        wr32(sp0 - 0x9cu, in_edi);
        esi = arg1;
        loc_88 = arg1;
L_10038779: ;
        if (rd8(esi) == 0xau)
        {
            wr32(sp0 - 0x84u, ebp);
            g->ecx = ecx;
            g->edx = edx;
            d40 = fr(g, (double)(int32_t)loc_80 + (double)rdf32(COW_IMG(0x1032a1acu)));
            fpush(g, d40);
            g->esp = sp0 - 0x9cu;
            t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t42 = g->ecx;
            t43 = g->edx;
            wr32(sp0 - 0x80u, t41);
            wr32(sp0 - 0x88u, esi + 1u);
            eax = t41;
            ecx = t42;
            edx = t43;
            loc_80 = t41;
            loc_88 = esi + 1u;
            esi = esi + 1u;
        }
        else
        {
            wr32(sp0 - 0xa0u, sp0 - 0x88u);
            g->esp = sp0 - 0x94u;
            t10 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x88u, in_edi, in_esi);
            if ((int32_t)((uint32_t)(int16_t)t10 & 0x8000003fu) >= 0)
            {
                eax = (uint32_t)(int16_t)t10;
                ecx = (uint32_t)(int16_t)t10 & 0x8000003fu;
                esi = t10;
            }
            else
            {
                eax = (uint32_t)(int16_t)t10;
                ecx = (uint32_t)(int16_t)t10 & 0x8000003fu;
                esi = t10;
                ecx = (ecx - 1u | 0xffffffc0u) + 1u;
            }
            wr32(sp0 - 0x8cu, ecx);
            t11 = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x3fu)) >> 6u);
            wr32(sp0 - 0x8cu, t11);
            eax = sp0 - 0x64u;
            x1 = (double)(int32_t)t11;
            x0 = (double)(int32_t)ecx;
            ecx = 4u;
L_100387c5: ;
            wr32(eax - 4u, 0u);
            wr32(eax, 0x3f800000u);
            wr32(eax + 4u, 0x80808080u);
            if (ecx != 1u)
            {
                eax = eax + 0x1cu;
                ecx = ecx - 1u;
                goto L_100387c5;
            }
            eax = eax + 0x1cu;
            ecx = ecx - 1u;
            wr32(sp0 - 0x78u, 0u);
            wr32(sp0 - 0xa0u, sp0 - 0x78u);
            wr32(sp0 - 0xa4u, esi);
            d12 = (double)(float)(double)(int32_t)rd32(sp0 - 0x84u);
            wrf32(sp0 - 0x8cu, (float)d12);
            wr32(sp0 - 0x74u, 0u);
            d13 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x84u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x38u, (float)d13);
            d14 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x84u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x70u, (float)d14);
            d15 = (double)(float)fr(g, fr(g, d12 + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x1cu, (float)d15);
            d16 = (double)(float)fr(g, fr(g, d12 + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x54u, (float)d16);
            d17 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x80u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x50u, (float)d17);
            d18 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x80u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x6cu, (float)d18);
            d19 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x80u) + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x18u, (float)d19);
            d20 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x80u) + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x34u, (float)d20);
            d21 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 0x24u, (float)d21);
            d22 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 0x5cu, (float)d22);
            d23 = (double)(float)fr(g, fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 8u, (float)d23);
            d24 = (double)(float)fr(g, fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 0x40u, (float)d24);
            d25 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032a778u)) * x1);
            wrf32(sp0 - 0x3cu, (float)d25);
            d26 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032a778u)) * x1);
            wrf32(sp0 - 0x58u, (float)d26);
            d27 = (double)(float)fr(g, fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a778u)));
            wrf32(sp0 - 4u, (float)d27);
            d28 = (double)(float)fr(g, fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a778u)));
            wrf32(sp0 - 0x20u, (float)d28);
            g->ecx = ecx;
            g->edx = sp0 - 0x78u;
            g->esp = sp0 - 0x9cu;
            t29 = cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, esi, sp0 - 0x78u);
            t30 = g->ecx;
            t31 = g->edx;
            g->edx = t31;
            d32 = fr(g, fr(g, (double)(int32_t)0u * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 - 0x8cu));
            fpush(g, d32);
            t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
            t34 = g->edx;
            wr32(sp0 - 0x84u, t33);
            wr32(sp0 - 0xa0u, 0x144u);
            t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xa4u, t35);
            cow_thiscall(g, rd32(rd32(t35) + 0x130u), rd32(t35), 2, t35, 0x144u);
            wr32(sp0 - 0xa0u, 0x1cu);
            wr32(sp0 - 0xa4u, sp0 - 0x70u);
            wr32(sp0 - 0xa8u, 2u);
            wr32(sp0 - 0xacu, 5u);
            g->ebx = 0u;
            g->edx = sp0 - 0x70u;
            t36 = rd32(COW_IMG(0x1045666cu));
            t37 = cow_thiscall(g, COW_IMG(0x1000cd00u), t36, 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
            t38 = g->ecx;
            t39 = g->edx;
            eax = t37;
            ecx = t38;
            edx = t39;
            esi = rd32(sp0 - 0x88u);
        }
        if (rd8(esi) != 0u) goto L_10038779;
        edi = rd32(sp0 - 0x9cu);
    }
    g->ebx = in_ebx;
    g->edi = edi;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10038720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10038720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
