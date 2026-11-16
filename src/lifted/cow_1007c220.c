/* f_0x1007c220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007c220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x60u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1007c2df;
    }
    eax = t1;
    edx = t2;
    if (rd16(COW_IMG(0x10485f7au)) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_1007c246;
    }
    g->edx = edx;
    return -arg3;
L_1007c246: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
        goto L_1007c25b;
    }
    g->edx = edx;
    return -arg3;
L_1007c25b: ;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x100882c0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
    }
    else
    {
        if (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
            ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            goto L_1007c287;
        }
        eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        if (eax == 7u) goto L_1007c287;
        if (eax != 0x21u) goto L_1007c2de;
L_1007c287: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        if ((t5 & 0x80000u) == 0u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
        }
        else
        {
            ecx = t6;
            edx = t7;
            t8 = rd32(COW_IMG(0x10456a28u));
            wr32(t8 + 0x18u, rd32(t8 + 0x18u) & 0xfffffff7u);
            g->eax = t8;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
            t10 = g->ecx;
            t11 = g->edx;
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t12 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe8u, 0u, 0u);
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
        }
        else
        {
            edx = t13;
            esi = t12;
            t14 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
            g->eax = rd32(COW_IMG(0x103551e0u));
            g->ecx = t14;
            g->edx = edx;
            t15 = rd32(COW_IMG(0x103551e0u));
            g->esp = sp0 - 4u;
            t16 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t14);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(esi + 4u, t16);
            g->edx = t18;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 8u, 0u);
            t19 = g->edx;
            edx = t19;
        }
L_1007c2de: ;
    }
L_1007c2df: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
