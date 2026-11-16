/* f_0x1007c390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007c390(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x50u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_4 = self;
        goto L_1007c4dd;
    }
    eax = t1;
    edx = t2;
    if (rd16(COW_IMG(0x10485f7au)) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_1007c3c0;
    }
    g->edx = edx;
    return -arg3;
L_1007c3c0: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
        goto L_1007c3da;
    }
    g->edx = edx;
    return -arg3;
L_1007c3da: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x100882c0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        loc_4 = self;
        goto L_1007c4dd;
    }
    edx = t4;
    t5 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x10095790u), rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u), 1, t5);
    if (rd8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x1bcu) == 0x17u)
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        loc_4 = (self & 0xffffffu) | rd8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x1bcu) << 0x18u;
        goto L_1007c4dd;
    }
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t6;
    esi = t5;
    loc_4 = (self & 0xffffffu) | rd8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x1bcu) << 0x18u;
    if (esi == 0u) goto L_1007c42f;
    if ((uint8_t)ebx == 0u) goto L_1007c4dd;
L_1007c42f: ;
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t7);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 1u)
    {
        eax = t9 - 1u;
        ecx = t10;
        edx = t11;
        ebp = t9;
        goto L_1007c496;
    }
    eax = t9 - 1u;
    ecx = t10;
    edx = t11;
    ebp = t9;
    esi = t7;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007c488;
    }
    eax = eax - 1u;
    if (esi == 0u)
    {
        edi = 0u;
    }
    else
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, esi);
        t13 = g->ecx;
        t14 = g->edx;
        if ((int32_t)t12 < 0)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            goto L_1007c463;
        }
        eax = t12;
        ecx = t13;
        edx = t14;
        edi = t12;
        if ((int32_t)edi <= 20) goto L_1007c465;
L_1007c463: ;
        edi = 0u;
    }
L_1007c465: ;
    if ((uint8_t)ebx == 0u) goto L_1007c4a4;
L_1007c469: ;
    if (loc_4 >> 0x18u != 0x18u)
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
        goto L_1007c4a8;
    }
    t15 = rd16(COW_IMG(0x10485f7au));
    wr8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)t15 * 4u) + 0x1bcu, 0x19u);
    edx = (uint32_t)(int16_t)t15;
L_1007c4b5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x113u, 0u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        wr32(eax + 4u, ebp);
        wr32(eax + 8u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0xcu, 0u);
        t19 = g->edx;
        edx = t19;
    }
L_1007c4dd: ;
    g->edx = edx;
    return arg3;
L_1007c488: ;
    if ((uint8_t)ebx != 0u)
    {
        edi = 0u;
        goto L_1007c469;
    }
    g->edx = edx;
    return arg3;
L_1007c496: ;
    if ((uint8_t)ebx == 0u)
    {
        edi = 0u;
        goto L_1007c4a4;
    }
    g->edx = edx;
    return arg3;
L_1007c4a4: ;
    eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
L_1007c4a8: ;
    if ((uint8_t)eax == 0x19u) goto L_1007c4b0;
    if ((uint8_t)eax != 0x1au) goto L_1007c4b5;
L_1007c4b0: ;
    if (ebp != 2u) goto L_1007c4dd;
    goto L_1007c4b5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
