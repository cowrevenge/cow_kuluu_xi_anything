/* f_0x10255be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10255be0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t30;
    uint32_t t4;
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

    if (rd32(sp0 + 8u) != 0u)
    {
        eax = rd32(sp0 + 8u);
        wr32(sp0 + 8u, eax);
        edx = in_edx;
        ebp = arg1;
        edi = in_edi;
L_10255bfa: ;
        if (ebp != 0u)
        {
            t1 = rd8(arg3);
            wr32(ebp + 4u, 0u);
            wr8(ebp, (uint8_t)t1);
            wr32(ebp + 8u, 0u);
            wr32(ebp + 0xcu, 0u);
            t2 = rd32(arg3 + 8u);
            if (t2 <= 0xffffffffu)
            {
                eax = t2;
                ebx = t2;
            }
            else
            {
                eax = t2;
                ebx = t2;
                ebx = 0xffffffffu;
            }
            if (ebp != arg3)
            {
                if (ebx == 0u) goto L_10255cd4;
                if (ebx != eax) goto L_10255cd4;
                if (rd32(arg3 + 4u) != 0u)
                {
                    eax = rd32(arg3 + 4u);
                }
                else
                {
                    eax = COW_IMG(0x1033ce70u);
                }
                if (rd8(eax - 1u) >= 0xfeu) goto L_10255cd4;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x10255380u), eax, ebp, g->edx, 0, 1, 1u);
                if (rd32(arg3 + 4u) != 0u)
                {
                    eax = rd32(arg3 + 4u);
                }
                else
                {
                    eax = COW_IMG(0x1033ce70u);
                }
                wr32(ebp + 4u, eax);
                t18 = rd32(arg3 + 8u);
                wr32(ebp + 8u, t18);
                t19 = rd32(arg3 + 0xcu);
                wr32(ebp + 0xcu, t19);
                t20 = rd8(eax - 1u);
                wr8(eax - 1u, (uint8_t)(t20 + 1u));
                ecx = (t18 & 0xffffff00u) | (uint8_t)(t20 + 1u);
                edx = t19;
            }
            else
            {
                if (ebx != 0u)
                {
                    g->ebp = ebp;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t3 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
                    t4 = g->edx;
                    eax = t3;
                    edx = t4;
                }
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10255b00u), ebp, 0);
                t5 = g->edx;
                if (rd32(ebp + 8u) - ebx >= 0xffffffffu)
                {
                    eax = rd32(ebp + 8u) - ebx;
                    edi = 0xffffffffu;
                    goto L_10255c48;
                }
                eax = rd32(ebp + 8u) - ebx;
                edx = t5;
                if (eax == 0u)
                {
                    edi = eax;
                    goto L_10255c7c;
                }
                edi = eax;
L_10255c48: ;
                t6 = ebx + edi + rd32(ebp + 4u);
                t7 = ebx + rd32(ebp + 4u);
                g->eax = eax - edi;
                g->edx = t6;
                g->esp = sp0 - 8u;
                t8 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t7, t6, eax - edi, in_edi, in_esi);
                t9 = g->edx;
                t10 = rd32(ebp + 8u) - edi;
                g->edx = t9;
                g->esp = sp0 - 0x10u;
                t11 = cow_thiscall(g, COW_IMG(0x10255260u), ebp, 2, t10, 0u);
                t12 = g->edx;
                if ((uint8_t)t11 == 0u)
                {
                    eax = t11;
                    edx = t12;
                }
                else
                {
                    eax = t11;
                    edx = t12;
                    esi = t10;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_thiscall(g, COW_IMG(0x102559c0u), ebp, 1, esi);
                    t14 = g->edx;
                    eax = t13;
                    edx = t14;
                }
L_10255c7c: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t15 = cow_thiscall(g, COW_IMG(0x102559e0u), ebp, 2, 0u, 0u);
                t16 = g->ecx;
                t17 = g->edx;
                eax = t15;
                ecx = t16;
                edx = t17;
            }
L_10255d0f: ;
            t26 = rd16(arg3 + 0x10u);
            wr16(ebp + 0x10u, (uint16_t)t26);
            wr16(ebp + 0x12u, rd16(arg3 + 0x12u));
            wr16(ebp + 0x14u, rd16(arg3 + 0x14u));
            t27 = rd16(arg3 + 0x16u);
            wr16(ebp + 0x16u, (uint16_t)t27);
            t28 = rd32(arg3 + 0x18u);
            wr32(ebp + 0x18u, t28);
            edx = ((edx | t26) & 0xffff0000u) | t27;
        }
        t29 = rd32(sp0 + 8u) - 1u;
        t30 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t29);
        if (t30 != 1u)
        {
            eax = t29;
            ebp = ebp + 0x1cu;
            goto L_10255bfa;
        }
    }
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
L_10255cd4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x10255260u), ebp, 2, ebx, 1u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    else
    {
        edx = t23;
        if (rd32(arg3 + 4u) != 0u)
        {
            esi = rd32(arg3 + 4u);
        }
        else
        {
            esi = COW_IMG(0x1033ce70u);
        }
        t24 = rd32(ebp + 4u);
        edi = t24;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t25 = rd32(ebp + 4u);
        wr32(ebp + 8u, ebx);
        wr8(ebx + t25, 0u);
        eax = ebx;
        ecx = t25;
    }
    goto L_10255d0f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10255be0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
