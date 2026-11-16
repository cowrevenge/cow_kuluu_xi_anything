/* f_0x102c7b2e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
void cow_fn_102c7b2e(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d3;
    double d31;
    double d32;
    double d36;
    double d37;
    double d4;
    double d41;
    double d42;
    double d46;
    double d47;
    double d5;
    double d51;
    double d52;
    double d56;
    double d57;
    double d6;
    double d61;
    double d62;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t loc_c;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t63;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            d1 = rdf64(sp0 + 0xcu);
            if (d1 < rdf64(COW_IMG(0x1032a108u)))
            {
                eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1032a108u)), 1u);
                x0 = rdf64(COW_IMG(0x1032a108u));
                goto L_102c7d4a;
            }
            eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1032a108u)), 1u);
            x0 = rdf64(COW_IMG(0x1032a108u));
            d2 = rdf64(sp0 + 0x14u);
            if (d2 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, x0, 1u);
            d3 = rdf64(sp0 + 0x1cu);
            if (d3 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, x0, 1u);
            d4 = rdf64(sp0 + 0x24u);
            if (d4 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, x0, 1u);
            d5 = rdf64(sp0 + 0x2cu);
            if (d5 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x0, 1u);
            d6 = rdf64(sp0 + 0x34u);
            if (d6 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, x0, 1u);
            d7 = rdf64(sp0 + 0x3cu);
            if (d7 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, x0, 1u);
                goto L_102c7d4a;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, x0, 1u);
            d8 = rdf64(sp0 + 0x44u);
            if (d8 < x0)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, x0, 0u);
                goto L_102c7d4c;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, x0, 0u);
            d9 = rdf64(sp0 + 0xcu);
            if ((cow_fsw(g, d9, rdf64(COW_IMG(0x103433d8u)), 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, rdf64(COW_IMG(0x103433d8u)), 1u);
                x0 = rdf64(COW_IMG(0x103433d8u));
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, rdf64(COW_IMG(0x103433d8u)), 1u);
            x0 = rdf64(COW_IMG(0x103433d8u));
            d10 = rdf64(sp0 + 0x14u);
            if ((cow_fsw(g, d10, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, x0, 1u);
            d11 = rdf64(sp0 + 0x1cu);
            if ((cow_fsw(g, d11, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, x0, 1u);
            d12 = rdf64(sp0 + 0x24u);
            if ((cow_fsw(g, d12, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, x0, 1u);
            d13 = rdf64(sp0 + 0x2cu);
            if ((cow_fsw(g, d13, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 1u);
            d14 = rdf64(sp0 + 0x34u);
            if ((cow_fsw(g, d14, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, x0, 1u);
            d15 = rdf64(sp0 + 0x3cu);
            if ((cow_fsw(g, d15, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, x0, 1u);
                goto L_102c7d41;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, x0, 1u);
            d16 = rdf64(sp0 + 0x44u);
            if ((cow_fsw(g, d16, x0, 0u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, x0, 0u);
                goto L_102c7d43;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, x0, 0u);
            d17 = rdf64(sp0 + 0xcu);
            wrf32(arg2 + 0x80u, (float)d17);
            d18 = rdf64(sp0 + 0x14u);
            wrf32(arg2 + 0x84u, (float)d18);
            d19 = rdf64(sp0 + 0x1cu);
            wrf32(arg2 + 0x88u, (float)d19);
            d20 = rdf64(sp0 + 0x24u);
            wrf32(arg2 + 0x8cu, (float)d20);
            d21 = rdf64(sp0 + 0x2cu);
            wrf32(arg2 + 0x90u, (float)d21);
            d22 = rdf64(sp0 + 0x34u);
            wrf32(arg2 + 0x94u, (float)d22);
            d23 = rdf64(sp0 + 0x3cu);
            wrf32(arg2 + 0x98u, (float)d23);
            d24 = rdf64(sp0 + 0x44u);
            wrf32(arg2 + 0x9cu, (float)d24);
            g->ecx = self;
            g->edx = in_edx;
            d25 = fr(g, fr(g, rdf64(sp0 + 0xcu) * rdf64(COW_IMG(0x10342dc0u))) + rdf64(COW_IMG(0x1032ab90u)));
            d26 = rdf64(COW_IMG(0x1032ab90u));
            d27 = rdf64(COW_IMG(0x10342dc0u));
            fpush(g, d25);
            g->esp = sp0 - 8u;
            t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t29 = g->ecx;
            t30 = g->edx;
            d31 = fr(g, rdf64(sp0 + 0x14u) * d27);
            wr32(arg2 + 0x100u, t28);
            g->ecx = t29;
            g->edx = t30;
            d32 = fr(g, d31 + d26);
            fpush(g, d32);
            t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
            t34 = g->ecx;
            t35 = g->edx;
            d36 = fr(g, rdf64(sp0 + 0x1cu) * d27);
            wr32(arg2 + 0x104u, t33);
            g->ecx = t34;
            g->edx = t35;
            d37 = fr(g, d36 + d26);
            fpush(g, d37);
            t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
            t39 = g->ecx;
            t40 = g->edx;
            d41 = fr(g, rdf64(sp0 + 0x24u) * d27);
            wr32(arg2 + 0x108u, t38);
            g->ecx = t39;
            g->edx = t40;
            d42 = fr(g, d41 + d26);
            fpush(g, d42);
            t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), t38, g->ecx, g->edx, 1, 0);
            t44 = g->ecx;
            t45 = g->edx;
            d46 = fr(g, rdf64(sp0 + 0x2cu) * d27);
            wr32(arg2 + 0x10cu, t43);
            g->ecx = t44;
            g->edx = t45;
            d47 = fr(g, d46 + d26);
            fpush(g, d47);
            t48 = cow_call_regs(g, COW_IMG(0x10311c6cu), t43, g->ecx, g->edx, 1, 0);
            t49 = g->ecx;
            t50 = g->edx;
            d51 = fr(g, rdf64(sp0 + 0x34u) * d27);
            wr32(arg2 + 0x110u, t48);
            g->ecx = t49;
            g->edx = t50;
            d52 = fr(g, d51 + d26);
            fpush(g, d52);
            t53 = cow_call_regs(g, COW_IMG(0x10311c6cu), t48, g->ecx, g->edx, 1, 0);
            t54 = g->ecx;
            t55 = g->edx;
            d56 = fr(g, rdf64(sp0 + 0x3cu) * d27);
            wr32(arg2 + 0x114u, t53);
            g->ecx = t54;
            g->edx = t55;
            d57 = fr(g, d56 + d26);
            fpush(g, d57);
            t58 = cow_call_regs(g, COW_IMG(0x10311c6cu), t53, g->ecx, g->edx, 1, 0);
            t59 = g->ecx;
            t60 = g->edx;
            d61 = fr(g, rdf64(sp0 + 0x44u) * d27);
            wr32(arg2 + 0x118u, t58);
            d62 = fr(g, d61 + d26);
            fpush(g, d62);
            t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), t58, g->ecx, g->edx, 1, 0);
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 4u);
            wr32(arg2 + 0x11cu, t63);
        }
    }
L_102c7d5b: ;
    return;
L_102c7d41: ;
L_102c7d43: ;
    loc_c = COW_IMG(0x103c9640u);
L_102c7d51: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_c);
    goto L_102c7d5b;
L_102c7d4a: ;
L_102c7d4c: ;
    loc_c = COW_IMG(0x103c960cu);
    goto L_102c7d51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7b2e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c7b2e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
