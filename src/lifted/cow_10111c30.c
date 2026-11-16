/* f_0x10111c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10111c30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg3 < 5u)
    {
        edx = in_edx;
        goto L_10111d0b;
    }
    g->ebx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf8cu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_10111d0b;
    }
    if ((int32_t)(uint16_t)arg3 >= (int32_t)((uint8_t)arg1 + 5u))
    {
        ecx = arg2 + (uint8_t)arg1 * 8u + 0x20u;
    }
    else
    {
        ecx = arg2 + 0x20u;
    }
    if (rd32(arg2 + 0xcu) == 0u)
    {
        edx = (uint16_t)arg3;
        goto L_10111c8d;
    }
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        edx = rd32(eax + 4u);
        goto L_10111c8d;
    }
    edx = rd32(eax + 4u);
    eax = edx;
L_10111c92: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101114d0u), self, 2, t3, ecx);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_10111dfc;
    ecx = t6;
    edx = t7;
    ebp = t5;
    if (rd32(arg2 + 0x14u) == 0u) goto L_10111cc0;
    eax = rd32(arg2 + 0x14u);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_10111cc0;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_10111cc5: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, eax, 0x3au, in_edi);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
    }
    else
    {
        eax = t8;
        edx = t9;
        esi = eax;
        edi = COW_IMG(0x1036bfd4u);
        ecx = 6u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            wr8(ebp + 8u, 1u);
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10109260u), ebp + 0x14u, 1, arg2 + 0x10u);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10109260u), ebp + 0x1cu, 1, arg2 + 0x18u);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->edx = t11;
    return 0u;
L_10111c8d: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111c92;
L_10111cc0: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111cc5;
L_10111d0b: ;
    if ((uint16_t)arg3 < 4u) goto L_10111da0;
    if ((int32_t)(uint16_t)arg3 >= (int32_t)((uint8_t)arg1 + 4u))
    {
        eax = arg2 + (uint8_t)arg1 * 8u + 0x18u;
    }
    else
    {
        eax = arg2 + 0x18u;
    }
    g->edx = (uint16_t)arg3;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10111450u), self, 2, arg2, eax);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        edx = t14;
        goto L_10111da0;
    }
    ecx = t13;
    edx = t14;
    ebp = t12;
    if (rd32(arg2 + 0xcu) == 0u) goto L_10111d55;
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_10111d55;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_10111d5a: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, eax, 0x3au, in_edi);
    t16 = g->edx;
    if (t15 == 0u)
    {
        edx = t16;
    }
    else
    {
        eax = t15;
        edx = t16;
        esi = eax;
        edi = COW_IMG(0x1036bfd4u);
        ecx = 6u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            wr8(ebp + 8u, 1u);
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10109260u), ebp + 0x14u, 1, arg2 + 8u);
    t17 = g->edx;
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x10109260u), ebp + 0x1cu, 1, arg2 + 0x10u);
    t18 = g->edx;
    g->ebx = in_ebx;
    g->edx = t18;
    return 0u;
L_10111d55: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111d5a;
L_10111da0: ;
    if ((uint16_t)arg3 < 5u) goto L_10111dfc;
    g->ebx = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf9cu));
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 != 0u) goto L_10111dfc;
    ecx = t20;
    edx = t21;
    if (rd32(arg2 + 0xcu) == 0u) goto L_10111dc8;
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_10111dc8;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_10111dcd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x101115b0u), self, 1, t22);
    if (t24 == 0u) goto L_10111dfc;
    eax = t24;
    g->eax = eax;
    g->edx = rd32(eax);
    t25 = rd32(eax);
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, rd32(t25 + 4u), eax, 4, arg1, arg2, arg3, arg4);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edx = t27;
    return t26;
L_10111dc8: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111dcd;
L_10111dfc: ;
    g->ebx = arg2;
    g->edx = arg4;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x101110d0u), self, 4, arg1, arg2, arg3, arg4);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->edx = t29;
    return t28;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10111c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10111c30(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
