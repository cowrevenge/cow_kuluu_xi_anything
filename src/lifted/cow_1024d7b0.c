/* f_0x1024d7b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1024d7b0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 4u) == 1u)
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101c4c20u), rd32(COW_IMG(0x10662dccu)), 0);
        t2 = g->edx;
        g->edx = t2;
        t3 = rd32(COW_IMG(0x10662dccu));
        t4 = cow_thiscall(g, COW_IMG(0x101c4ac0u), t3, 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            ecx = t5;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            edi = rd32(COW_IMG(0x103290f8u));
L_1024d7e0: ;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_call_regs(g, COW_IMG(0x1024d870u), g->eax, ecx, edx, 1, 1, arg1);
            t8 = g->ecx;
            t9 = g->edx;
            g->edx = t9;
            t10 = cow_thiscall(g, edi, t8, 1, 2u);
            t11 = g->edx;
            g->edx = t11;
            t12 = rd32(COW_IMG(0x10662dccu));
            t13 = cow_thiscall(g, COW_IMG(0x101c4ac0u), t12, 0);
            t14 = g->ecx;
            t15 = g->edx;
            if ((uint8_t)t13 != 0u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
                goto L_1024d7e0;
            }
            ecx = t14;
            edx = t15;
        }
        wr32(arg1 + 4u, 0u);
        g->eax = arg1 + 0x240u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_cdecl(g, COW_IMG(0x10253180u), 3, arg1 + 0x240u, in_ebx, in_edi);
        t17 = g->edx;
        g->ecx = arg1 + 0xa8u;
        g->esp = sp0 - 8u;
        t18 = cow_cdecl(g, COW_IMG(0x10252a60u), 3, arg1 + 0xa8u, arg1 + 0x240u, in_ebx);
        t19 = g->ecx;
        g->ecx = t19;
        g->edx = arg1 + 0xccu;
        g->esp = sp0 - 0xcu;
        t20 = cow_cdecl(g, COW_IMG(0x10252a60u), 3, arg1 + 0xccu, arg1 + 0xa8u, arg1 + 0x240u);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
        ebx = 4u;
        edi = arg1 + 0xf0u;
L_1024d836: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_cdecl(g, COW_IMG(0x102511a0u), 3, edi, in_ebx, in_edi);
        t24 = g->ecx;
        t25 = g->edx;
        if (ebx != 1u)
        {
            eax = t23;
            ecx = t24;
            edx = t25;
            ebx = ebx - 1u;
            edi = edi + 0x1cu;
            goto L_1024d836;
        }
        ecx = t24;
        edx = t25;
        esi = arg1 + 0x1d0u;
        edi = 4u;
L_1024d851: ;
        g->eax = esi - 0x70u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t26 = cow_cdecl(g, COW_IMG(0x102511a0u), 3, esi - 0x70u, in_edi, in_esi);
        t27 = g->ecx;
        t28 = g->edx;
        g->ecx = t27;
        g->edx = t28;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102511a0u), 3, esi, esi - 0x70u, in_edi);
        t29 = g->ecx;
        t30 = g->edx;
        if (edi != 1u)
        {
            ecx = t29;
            edx = t30;
            esi = esi + 0x1cu;
            edi = edi - 1u;
            goto L_1024d851;
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024d7b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
