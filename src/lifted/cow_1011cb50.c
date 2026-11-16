/* f_0x1011cb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011cb50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr8(arg2, 0u);
    wr8(arg2 + 1u, 0u);
    if ((uint16_t)arg1 != 0xcbu) goto L_1011cb75;
    eax = 0u;
    ecx = 0x8181u;
L_1011cde3: ;
    if ((int32_t)eax <= 0)
    {
        edx = (uint8_t)ecx;
        ebx = ecx >> 8u;
        goto L_1011ce64;
    }
    edi = ecx >> 8u;
    ecx = (uint8_t)ecx;
    if ((int32_t)(0xfcu - (uint32_t)(int16_t)ecx) >= (int32_t)eax)
    {
        esi = 0u;
    }
    else
    {
        edx = (uint32_t)(int16_t)ecx;
        if ((int16_t)ecx > 127)
        {
            eax = eax + edx - 0xfdu;
            esi = 1u;
        }
        else
        {
            eax = eax + edx - 0xfdu;
            eax = eax + 1u;
            esi = 1u;
        }
    }
    t1 = cow_divs(g, eax, 0xbcu);
    t2 = cow_mods(g, eax, 0xbcu);
    if ((int32_t)(esi + t1) <= 0)
    {
        edx = t2;
        ebx = edi + esi + t1;
        goto L_1011ce39;
    }
    edx = t2;
    ebx = edi + esi + t1;
    if ((int16_t)(edx + 0x40u) < 127)
    {
        edx = edx + 0x40u;
        goto L_1011ce64;
    }
    edx = edx + 0x40u;
L_1011ce47: ;
    if ((uint16_t)edx != 0xfcu) goto L_1011ce63;
    wr8(arg2, (uint8_t)(ebx + 1u));
    wr8(arg2 + 1u, 0x40u);
    return 2u;
L_1011cb75: ;
    if ((int16_t)arg1 < 8126) goto L_1011cb8e;
    eax = (uint32_t)(int16_t)arg1 - 0x1fbeu;
    ecx = 0xed3fu;
    goto L_1011cde3;
L_1011cb8e: ;
    if ((int16_t)arg1 < 5399) goto L_1011cba7;
    eax = (uint32_t)(int16_t)arg1 - 0x1517u;
    ecx = 0xe040u;
    goto L_1011cde3;
L_1011cba7: ;
    if ((int16_t)arg1 < 3989) goto L_1011cbc0;
    eax = (uint32_t)(int16_t)arg1 - 0xf95u;
    ecx = 0x989fu;
    goto L_1011cde3;
L_1011cbc0: ;
    if ((int16_t)arg1 < 1024) goto L_1011cbd9;
    eax = (uint32_t)(int16_t)arg1 - 0x400u;
    ecx = 0x889fu;
    goto L_1011cde3;
L_1011cbd9: ;
    if ((int16_t)arg1 < 989) goto L_1011cbf2;
    eax = (uint32_t)(int16_t)arg1 - 0x3ddu;
    ecx = 0x877eu;
    goto L_1011cde3;
L_1011cbf2: ;
    if ((int16_t)arg1 < 966) goto L_1011cc0b;
    eax = (uint32_t)(int16_t)arg1 - 0x3c6u;
    ecx = 0x875fu;
    goto L_1011cde3;
L_1011cc0b: ;
    if ((int16_t)arg1 < 936) goto L_1011cc24;
    eax = (uint32_t)(int16_t)arg1 - 0x3a8u;
    ecx = 0x8740u;
    goto L_1011cde3;
L_1011cc24: ;
    if ((int16_t)arg1 < 704) goto L_1011cc3d;
    eax = (uint32_t)(int16_t)arg1 - 0x2c0u;
    ecx = 0x8540u;
    goto L_1011cde3;
L_1011cc3d: ;
    if ((int16_t)arg1 < 622) goto L_1011cc56;
    eax = (uint32_t)(int16_t)arg1 - 0x26eu;
    ecx = 0x859fu;
    goto L_1011cde3;
L_1011cc56: ;
    if ((int16_t)arg1 < 741) goto L_1011cc6f;
    eax = (uint32_t)(int16_t)arg1 - 0x2e5u;
    ecx = 0x815fu;
    goto L_1011cde3;
L_1011cc6f: ;
    if ((int16_t)arg1 < 588) goto L_1011cc88;
    eax = (uint32_t)(int16_t)arg1 - 0x24cu;
    ecx = 0x849fu;
    goto L_1011cde3;
L_1011cc88: ;
    if ((int16_t)arg1 < 555) goto L_1011cca1;
    eax = (uint32_t)(int16_t)arg1 - 0x22bu;
    ecx = 0x8470u;
    goto L_1011cde3;
L_1011cca1: ;
    if ((int16_t)arg1 < 522) goto L_1011ccba;
    eax = (uint32_t)(int16_t)arg1 - 0x20au;
    ecx = 0x8440u;
    goto L_1011cde3;
L_1011ccba: ;
    if ((int16_t)arg1 < 498) goto L_1011ccd3;
    eax = (uint32_t)(int16_t)arg1 - 0x1f2u;
    ecx = 0x83bfu;
    goto L_1011cde3;
L_1011ccd3: ;
    if ((int16_t)arg1 < 474) goto L_1011ccec;
    eax = (uint32_t)(int16_t)arg1 - 0x1dau;
    ecx = 0x839fu;
    goto L_1011cde3;
L_1011ccec: ;
    if ((int16_t)arg1 < 388) goto L_1011cd05;
    eax = (uint32_t)(int16_t)arg1 - 0x184u;
    ecx = 0x8340u;
    goto L_1011cde3;
L_1011cd05: ;
    if ((int16_t)arg1 < 305) goto L_1011cd1e;
    eax = (uint32_t)(int16_t)arg1 - 0x131u;
    ecx = 0x829fu;
    goto L_1011cde3;
L_1011cd1e: ;
    if ((int16_t)arg1 < 279) goto L_1011cd37;
    eax = (uint32_t)(int16_t)arg1 - 0x117u;
    ecx = 0x8281u;
    goto L_1011cde3;
L_1011cd37: ;
    if ((int16_t)arg1 < 253) goto L_1011cd50;
    eax = (uint32_t)(int16_t)arg1 - 0xfdu;
    ecx = 0x8260u;
    goto L_1011cde3;
L_1011cd50: ;
    if ((int16_t)arg1 < 243) goto L_1011cd66;
    eax = (uint32_t)(int16_t)arg1 - 0xf3u;
    ecx = 0x824fu;
    goto L_1011cde3;
L_1011cd66: ;
    if ((uint16_t)arg1 != 0xf2u) goto L_1011cd76;
    eax = 0u;
    ecx = 0x819bu;
    goto L_1011cde3;
L_1011cd76: ;
    if ((int16_t)arg1 < 234) goto L_1011cd8c;
    eax = (uint32_t)(int16_t)arg1 - 0xeau;
    ecx = 0x81f0u;
    goto L_1011cde3;
L_1011cd8c: ;
    if ((int16_t)arg1 < 219) goto L_1011cda2;
    eax = (uint32_t)(int16_t)arg1 - 0xdbu;
    ecx = 0x81dau;
    goto L_1011cde3;
L_1011cda2: ;
    if ((int16_t)arg1 < 212) goto L_1011cdb8;
    eax = (uint32_t)(int16_t)arg1 - 0xd4u;
    ecx = 0x81c8u;
    goto L_1011cde3;
L_1011cdb8: ;
    if ((int16_t)arg1 < 204) goto L_1011cdce;
    eax = (uint32_t)(int16_t)arg1 - 0xccu;
    ecx = 0x81b8u;
    goto L_1011cde3;
L_1011cdce: ;
    if ((int16_t)arg1 < 96) goto L_1011ce73;
    eax = (uint32_t)(int16_t)arg1 - 0x60u;
    ecx = 0x8140u;
    goto L_1011cde3;
L_1011ce39: ;
    if ((int16_t)(ecx + edx) < 127)
    {
        edx = ecx + edx;
        goto L_1011ce64;
    }
    edx = ecx + edx;
    if ((int16_t)ecx >= 127) goto L_1011ce64;
    goto L_1011ce47;
L_1011ce63: ;
    edx = edx + 1u;
L_1011ce64: ;
    wr8(arg2, (uint8_t)ebx);
    wr8(arg2 + 1u, (uint8_t)edx);
    return 2u;
L_1011ce73: ;
    wr8(arg2, (uint8_t)((uint8_t)arg1 + 0x20u));
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011cb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011cb50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
