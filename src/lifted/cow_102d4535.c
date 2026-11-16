/* f_0x102d4535 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d4535(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xa4u;
    cow_thiscall(g, COW_IMG(0x102e0f8cu), sp0 - 0x34u, 0);
    t1 = g->edx;
    if (arg1 != 0u)
    {
        edx = t1;
        wr32(sp0 - 0xa8u, in_ebx);
        wr32(sp0 - 0xacu, in_edi);
        if (arg4 != 0u)
        {
            if ((uint16_t)arg7 == 5u) goto L_102d4672;
            if (arg8 != 0u) goto L_102d4672;
            if (arg2 == arg5) goto L_102d45b0;
            if (arg2 == 0u) goto L_102d4672;
            if (arg5 == 0u) goto L_102d4672;
            esi = arg2;
            edi = arg5;
            ecx = 0x100u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
            if (!zf) goto L_102d4672;
L_102d45b0: ;
            if (arg3 == 0u)
            {
                wr32(sp0 - 0xb0u, sp0 - 0x54u);
                wr32(sp0 - 0xb4u, arg1);
                g->esp = sp0 - 0xacu;
                cow_thiscall(g, rd32(rd32(arg1) + 0x20u), rd32(arg1), 2, arg1, sp0 - 0x54u);
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x10u, 0u);
                t2 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0xcu, t2);
                t3 = rd32(sp0 - 0x38u);
                wr32(sp0 - 8u, t3);
                edx = t2;
                loc_14 = 0u;
                loc_10 = 0u;
                loc_c = t2;
                loc_8 = t3;
            }
            else
            {
                esi = arg3;
                edi = sp0 - 0x14u;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                edx = rd32(sp0 - 0xcu);
            }
            if (arg6 == 0u)
            {
                wr32(sp0 - 0xb0u, sp0 - 0x54u);
                wr32(sp0 - 0xb4u, arg4);
                g->esp = sp0 - 0xacu;
                cow_thiscall(g, rd32(rd32(arg4) + 0x20u), sp0 - 0x54u, 2, arg4, sp0 - 0x54u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x20u, 0u);
                t4 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x1cu, t4);
                t5 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x18u, t5);
                eax = t4;
                ecx = t5;
                edx = rd32(sp0 - 0xcu);
                loc_24 = 0u;
                loc_20 = 0u;
            }
            else
            {
                esi = arg6;
                edi = sp0 - 0x24u;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                eax = rd32(sp0 - 0x1cu);
                ecx = rd32(sp0 - 0x18u);
            }
            if (edx - loc_14 != eax - loc_24)
            {
                edx = edx - loc_14;
                goto L_102d4672;
            }
            edx = edx - loc_14;
            if (loc_8 - loc_10 != ecx - loc_20) goto L_102d4672;
            wr32(sp0 - 0xb0u, sp0 + 0x10u);
            wr32(sp0 - 0xb4u, arg4);
            g->eax = rd32(arg4);
            g->edx = edx;
            t6 = rd32(arg4);
            g->esp = sp0 - 0xacu;
            t7 = cow_thiscall(g, rd32(t6 + 0xcu), sp0 + 0x10u, 2, arg4, sp0 + 0x10u);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0xb0u, 1u);
            cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, t8, t9, 1, 1, 1u);
            wr32(sp0 - 0xb0u, sp0 - 0x14u);
            wr32(sp0 - 0xb4u, arg1);
            wr32(sp0 - 0xb8u, 1u);
            wr32(sp0 - 0xbcu, sp0 - 0x24u);
            wr32(sp0 - 0xc0u, arg4);
            wr32(sp0 - 0xc4u, arg4);
            g->eax = arg4;
            g->edx = sp0 - 0x24u;
            t10 = rd32(arg4);
            t11 = cow_thiscall(g, rd32(t10 + 0x70u), t10, 6, arg4, arg4, sp0 - 0x24u, 1u, arg1, sp0 - 0x14u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0xb0u, 0u);
            cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, t12, t13, 1, 1, 0u);
            t14 = g->edx;
            wr32(sp0 - 0xb0u, arg4);
            g->edx = t14;
            cow_thiscall(g, rd32(rd32(arg4) + 8u), rd32(arg4), 1, arg4);
            t15 = g->edx;
            if ((int32_t)t11 >= 0)
            {
                edx = t15;
                goto L_102d46c5;
            }
            edx = t15;
L_102d4672: ;
            if (arg1 != arg4)
            {
                eax = 1u;
            }
            else
            {
                eax = 0x10001u;
            }
            wr32(sp0 - 0xb0u, eax);
            wr32(sp0 - 0xb4u, 0u);
            wr32(sp0 - 0xb8u, arg6);
            wr32(sp0 - 0xbcu, arg5);
            wr32(sp0 - 0xc0u, arg4);
            wr32(sp0 - 0xc4u, sp0 - 0xa0u);
            g->esp = sp0 - 0xacu;
            t16 = cow_fastcall(g, COW_IMG(0x102e1026u), sp0 - 0x34u, edx, 6, sp0 - 0xa0u, arg4, arg5, arg6, 0u, eax);
            t17 = g->ecx;
            t18 = g->edx;
            if ((int32_t)t16 >= 0)
            {
                ecx = t17;
                edx = t18;
                goto L_102d469d;
            }
            eax = t16;
            edx = t18;
L_102d4699: ;
            esi = eax;
        }
        else
        {
            esi = 0x8876086cu;
        }
L_102d46c7: ;
    }
    else
    {
        edx = t1;
        esi = 0x8876086cu;
    }
    g->esp = sp0 - 0xa4u;
    cow_fastcall(g, COW_IMG(0x102e1021u), sp0 - 0x34u, edx, 0);
    t24 = g->edx;
    g->edx = t24;
    return esi;
L_102d469d: ;
    wr32(sp0 - 0xb0u, arg8);
    wr32(sp0 - 0xb4u, arg7);
    wr32(sp0 - 0xb8u, sp0 - 0x78u);
    wr32(sp0 - 0xbcu, arg5);
    t19 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0xc0u, t19);
    t20 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xc4u, t20);
    t21 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0xc8u, t21);
    wr32(sp0 - 0xccu, arg3);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t22 = cow_stdcall(g, COW_IMG(0x102d2888u), 10, arg1, arg2, arg3, t21, t20, t19, arg5, sp0 - 0x78u, arg7, arg8);
    t23 = g->edx;
    if ((int32_t)t22 < 0)
    {
        eax = t22;
        edx = t23;
        goto L_102d4699;
    }
    edx = t23;
L_102d46c5: ;
    esi = 0u;
    goto L_102d46c7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d4535(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d4535(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
