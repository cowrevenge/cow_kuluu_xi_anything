/* f_0x10256230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10256230(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != arg2)
    {
        ecx = self;
        edx = in_edx;
        ebp = arg1;
        edi = in_edi;
L_10256244: ;
        t1 = rd32(arg3 + 8u);
        if (t1 <= 0xffffffffu)
        {
            eax = t1;
            ebx = t1;
        }
        else
        {
            eax = t1;
            ebx = t1;
            ebx = 0xffffffffu;
        }
        if (ebp != arg3)
        {
            if (ebx == 0u) goto L_1025632c;
            if (ebx != eax) goto L_1025632c;
            if (rd32(arg3 + 4u) != 0u)
            {
                eax = rd32(arg3 + 4u);
            }
            else
            {
                eax = COW_IMG(0x1033ce70u);
            }
            if (rd8(eax - 1u) >= 0xfeu) goto L_1025632c;
            if (rd32(ebp + 4u) != 0u)
            {
                eax = rd32(ebp + 4u);
                if (rd8(eax - 1u) == 0u)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
                    eax = eax - 1u;
                    goto L_102562f5;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
                eax = eax - 1u;
                if ((uint8_t)ecx == 0xffu) goto L_102562f5;
                wr8(eax, (uint8_t)((uint8_t)ecx - 1u));
            }
L_102562fe: ;
            wr32(ebp + 4u, 0u);
            wr32(ebp + 8u, 0u);
            wr32(ebp + 0xcu, 0u);
            if (rd32(arg3 + 4u) != 0u)
            {
                eax = rd32(arg3 + 4u);
            }
            else
            {
                eax = COW_IMG(0x1033ce70u);
            }
            wr32(ebp + 4u, eax);
            t17 = rd32(arg3 + 8u);
            wr32(ebp + 8u, t17);
            t18 = rd32(arg3 + 0xcu);
            wr32(ebp + 0xcu, t18);
            t19 = rd8(eax - 1u);
            wr8(eax - 1u, (uint8_t)(t19 + 1u));
            ecx = (t17 & 0xffffff00u) | (uint8_t)(t19 + 1u);
            edx = t18;
            edi = 0u;
        }
        else
        {
            if (rd32(ebp + 8u) >= ebx)
            {
                eax = rd32(ebp + 8u);
            }
            else
            {
                eax = rd32(ebp + 8u);
                g->ebp = ebp;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t2 = cow_stdcall(g, COW_IMG(0x1032708cu), 0);
                t3 = g->edx;
                eax = t2;
                edx = t3;
            }
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10255b00u), ebp, 0);
            t4 = g->edx;
            if (rd32(ebp + 8u) - ebx >= 0xffffffffu)
            {
                eax = rd32(ebp + 8u) - ebx;
                edi = 0xffffffffu;
                goto L_1025627f;
            }
            eax = rd32(ebp + 8u) - ebx;
            edx = t4;
            if (eax == 0u)
            {
                edi = eax;
                goto L_102562b3;
            }
            edi = eax;
L_1025627f: ;
            t5 = ebx + edi + rd32(ebp + 4u);
            t6 = ebx + rd32(ebp + 4u);
            g->eax = eax - edi;
            g->edx = t5;
            g->esp = sp0 - 8u;
            t7 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t6, t5, eax - edi, in_edi, in_esi);
            t8 = g->edx;
            t9 = rd32(ebp + 8u) - edi;
            g->edx = t8;
            g->esp = sp0 - 0x10u;
            t10 = cow_thiscall(g, COW_IMG(0x10255260u), ebp, 2, t9, 0u);
            t11 = g->edx;
            if ((uint8_t)t10 == 0u)
            {
                eax = t10;
                edx = t11;
                ebx = t6;
            }
            else
            {
                eax = t10;
                edx = t11;
                ebx = t6;
                esi = t9;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t12 = cow_thiscall(g, COW_IMG(0x102559c0u), ebp, 1, esi);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
L_102562b3: ;
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t14 = cow_thiscall(g, COW_IMG(0x10255b00u), ebp, 0);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
        }
L_10256367: ;
        t25 = rd16(arg3 + 0x10u);
        wr16(ebp + 0x10u, (uint16_t)t25);
        wr16(ebp + 0x12u, rd16(arg3 + 0x12u));
        t26 = rd16(arg3 + 0x14u);
        wr16(ebp + 0x14u, (uint16_t)t26);
        t27 = rd16(arg3 + 0x16u);
        wr16(ebp + 0x16u, (uint16_t)t27);
        t28 = rd32(arg3 + 0x18u);
        wr32(ebp + 0x18u, t28);
        if (ebp + 0x1cu != arg2)
        {
            ecx = (ecx & 0xffff0000u) | t26;
            edx = ((edx | t25) & 0xffff0000u) | t27;
            ebp = ebp + 0x1cu;
            goto L_10256244;
        }
    }
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
L_102562f5: ;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
    goto L_102562fe;
L_1025632c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x10255260u), ebp, 2, ebx, 1u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        edi = 0u;
    }
    else
    {
        edx = t22;
        if (rd32(arg3 + 4u) != 0u)
        {
            esi = rd32(arg3 + 4u);
        }
        else
        {
            esi = COW_IMG(0x1033ce70u);
        }
        t23 = rd32(ebp + 4u);
        edi = t23;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t24 = rd32(ebp + 4u);
        wr32(ebp + 8u, ebx);
        wr8(ebx + t24, 0u);
        eax = ebx;
        ecx = t24;
    }
    goto L_10256367;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10256230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10256230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
