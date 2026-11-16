/* f_0x10315ae8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10315ae8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109b27b8u)) != 0u)
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, rd32(COW_IMG(0x10329198u)), self, 1, COW_IMG(0x109f8410u));
        t2 = g->ecx;
        t3 = g->edx;
        if (rd32(COW_IMG(0x109f840cu)) == 0u)
        {
            ecx = t2;
            edx = t3;
            loc_8 = 0u;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, COW_IMG(0x109f8410u));
            t5 = g->ecx;
            t6 = g->edx;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, t5, t6, 1, 3, 0x13u, in_edi, in_esi);
            t7 = g->edx;
            ecx = 0x13u;
            edx = t7;
            loc_8 = 1u;
        }
        if (rd32(COW_IMG(0x109b27b8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x109b27b8u));
            g->esp = sp0 - 0x18u;
            t9 = cow_call_regs(g, COW_IMG(0x1031edeau), g->eax, ecx, edx, 1, 8, eax, 0x100u, arg1, 0xffffffffu, 0u, 0u, 0u, 1u);
            t10 = g->ecx;
            t11 = g->edx;
            if (t9 == 0u)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                loc_c = 0u;
            }
            else
            {
                ecx = t10;
                edx = t11;
                ebx = t9;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t12 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, ebx, in_ebx, in_edi);
                t13 = g->edx;
                if (t12 == 0u)
                {
                    eax = t12;
                    ecx = ebx;
                    edx = t13;
                    loc_c = t12;
                }
                else
                {
                    eax = t12;
                    ecx = ebx;
                    edx = t13;
                    loc_c = t12;
                    g->esp = sp0 - 0x18u;
                    t14 = cow_call_regs(g, COW_IMG(0x1031edeau), g->eax, ecx, edx, 1, 8, rd32(COW_IMG(0x109b27b8u)), 0x100u, arg1, 0xffffffffu, eax, ebx, 0u, 1u);
                    t15 = g->ecx;
                    t16 = g->edx;
                    if (t14 == 0u)
                    {
                        eax = t14;
                        ecx = t15;
                        edx = t16;
                    }
                    else
                    {
                        ecx = t15;
                        edx = t16;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t17 = cow_cdecl(g, COW_IMG(0x10317500u), 3, arg1, loc_c, in_ebx);
                        t18 = g->edx;
                        eax = t17;
                        ecx = loc_c;
                        edx = t18;
                    }
                }
            }
            if (loc_8 == 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t21 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, COW_IMG(0x109f8410u));
                t22 = g->ecx;
                t23 = g->edx;
                eax = t21;
                ecx = t22;
                edx = t23;
            }
            else
            {
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t19 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_edi, in_esi);
                t20 = g->edx;
                eax = t19;
                ecx = 0x13u;
                edx = t20;
            }
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, loc_c, in_edi, in_esi);
            t24 = g->edx;
            edx = t24;
        }
        else
        {
            eax = rd32(COW_IMG(0x109b27b8u));
            if (loc_8 == 0u)
            {
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, COW_IMG(0x109f8410u));
                t8 = g->ecx;
                ecx = t8;
            }
            else
            {
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_edi, in_esi);
                ecx = 0x13u;
            }
            if (rd8(arg1) == 0u)
            {
                edx = arg1;
                goto L_10315c18;
            }
            edx = arg1;
L_10315b82: ;
            if ((int8_t)rd8(edx) < 65)
            {
                ecx = (ecx & 0xffffff00u) | rd8(edx);
            }
            else
            {
                ecx = (ecx & 0xffffff00u) | rd8(edx);
                if ((int8_t)ecx <= 90)
                {
                    wr8(edx, (uint8_t)((uint8_t)ecx + 0x20u));
                    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0x20u);
                }
            }
            if (rd8(edx + 1u) != 0u)
            {
                edx = edx + 1u;
                goto L_10315b82;
            }
            edx = edx + 1u;
        }
    }
    else
    {
        if (rd8(arg1) == 0u)
        {
            edx = arg1;
            goto L_10315c18;
        }
        ecx = self;
        edx = arg1;
L_10315b0a: ;
        if ((int8_t)rd8(edx) < 65)
        {
            ecx = (ecx & 0xffffff00u) | rd8(edx);
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | rd8(edx);
            if ((int8_t)ecx <= 90)
            {
                wr8(edx, (uint8_t)((uint8_t)ecx + 0x20u));
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0x20u);
            }
        }
        if (rd8(edx + 1u) != 0u)
        {
            edx = edx + 1u;
            goto L_10315b0a;
        }
        edx = edx + 1u;
    }
L_10315c18: ;
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315ae8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10315ae8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
