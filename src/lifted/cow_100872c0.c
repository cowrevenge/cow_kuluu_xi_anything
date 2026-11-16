/* f_0x100872c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100872c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((t1 >> 8u & 0x10u) != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_100872d9;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t5 = g->edx;
    if ((t4 >> 8u & 8u) != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100872d9;
    }
    eax = t4;
    edx = t5;
    ebx = in_ebx & 0xffffff00u;
L_100872db: ;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x10221340u), ecx + 0x20u, 1, 0x80000000u);
        t7 = g->edx;
        eax = t6;
        ecx = rd32(COW_IMG(0x105781f8u));
        edx = t7;
    }
    if ((uint8_t)ebx == 0u)
    {
        if ((uint8_t)eax == 0u)
        {
            if (ecx != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x10221230u), ecx + 0x20u, 1, 0x80000000u);
                t10 = g->ecx;
                t11 = g->edx;
                ecx = t10;
                edx = t11;
            }
        }
    }
    else
    {
        if ((uint8_t)eax != 0u)
        {
            if (ecx != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x102212e0u), ecx + 0x20u, 1, 0x80000000u);
                t8 = g->ecx;
                t9 = g->edx;
                ecx = t8;
                edx = t9;
            }
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((t12 & 0x200000u) != 0u)
    {
        eax = t12;
        edx = t14;
        goto L_10087346;
    }
    ecx = t13;
    edx = t14;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t16 = g->edx;
    if ((t15 >> 8u & 8u) != 0u)
    {
        eax = t15;
        edx = t16;
        goto L_10087346;
    }
    eax = t15;
    edx = t16;
    ebx = ebx & 0xffffff00u;
L_10087348: ;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x10221320u), ecx + 0x20u, 1, 0x40000000u);
        t18 = g->edx;
        eax = t17;
        ecx = rd32(COW_IMG(0x105781f8u));
        edx = t18;
    }
    if ((uint8_t)ebx == 0u) goto L_10087384;
    if ((uint8_t)eax == 0u) goto L_100873ac;
    if (ecx == 0u) goto L_100873ac;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x102212c0u), ecx + 0x20u, 1, 0x40000000u);
    return;
L_100872d9: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_100872db;
L_10087346: ;
    ebx = (ebx & 0xffffff00u) | 1u;
    goto L_10087348;
L_10087384: ;
    if ((uint8_t)eax == 0u)
    {
        if (ecx != 0u)
        {
            g->edx = edx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x102211f0u), ecx + 0x20u, 1, 0x40000000u);
            t19 = g->edx;
            if (rd32(COW_IMG(0x105781f8u)) != 0u)
            {
                eax = rd32(COW_IMG(0x105781f8u));
                edx = t19;
                g->esp = sp0;
                cow_call_regs(g, COW_IMG(0x102213b0u), eax, eax + 0x20u, g->edx, 0, 1, 0xffffffe8u);
            }
        }
    }
L_100873ac: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100872c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100872c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
